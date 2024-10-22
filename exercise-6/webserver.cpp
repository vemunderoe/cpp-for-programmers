#include <boost/asio.hpp>
#include <functional>
#include <iostream>

using namespace std;
using namespace boost::asio::ip;

class EchoServer {
private:
  class Connection {
  public:
    tcp::socket socket;
    Connection(boost::asio::io_service &io_service) : socket(io_service) {}
  };

  boost::asio::io_service io_service;

  tcp::endpoint endpoint;
  tcp::acceptor acceptor;

  void handle_request(shared_ptr<Connection> connection) {
    auto read_buffer = make_shared<boost::asio::streambuf>();
    cout << "Reading buffer from connection..." << endl;
    // Read from client until newline ("\n")
    async_read_until(connection->socket, *read_buffer, "\r\n",
                     [this, connection, read_buffer](const boost::system::error_code &ec, size_t) {
                       cout << "Ended reading from buffer." << endl;
                       // If not error:
                       if (!ec) {
                         // Retrieve message from client as string:
                         istream read_stream(read_buffer.get());
                         std::string message;
                         getline(read_stream, message);
                         message.pop_back();

                         // Close connection when "exit" is retrieved from client
                         if (message == "exit")
                           return;

                         cout << "Message from a connected client: " << endl
                              << message << endl;

                         auto write_buffer = make_shared<boost::asio::streambuf>();
                         ostream write_stream(write_buffer.get());

                         if (message == "GET / HTTP/1.1")
                           write_stream << create_http_response_with_content(get_home_content());
                         else if (message == "GET /en_side HTTP/1.1")
                           write_stream << create_http_response_with_content(get_en_side());
                         else
                           write_stream << create_http_response_with_content("404 Not Found");

                         // Write to client
                         async_write(connection->socket, *write_buffer,
                                     [this, connection, write_buffer](const boost::system::error_code &ec, size_t) {
                                       // If not error:
                                       if (!ec)
                                         handle_request(connection);
                                     });
                       }
                     });
  }

  void accept() {
    // The (client) connection is added to the lambda parameter and handle_request
    // in order to keep the object alive for as long as it is needed.
    auto connection = make_shared<Connection>(io_service);

    // Accepts a new (client) connection. On connection, immediately start accepting a new connection
    acceptor.async_accept(connection->socket, [this, connection](const boost::system::error_code &ec) {
      accept();
      // If not error:
      if (!ec) {
        cout << "Client connected" << endl;
        handle_request(connection);
      }
    });
  }

  string create_http_response_with_content(const string &content) const {
    string response = "HTTP/1.1 200 OK\n";
    response.append("Content-Type: text/html; charset=UTF-8\n");
    response.append("Content-Length: ");
    response.append(to_string(content.length()));
    response.append("\n");
    response.append("Connection: Close\n");
    response.append("\n");
    response.append(content);
    response.append("\r\n");
    return response;
  }

  string get_home_content() const {
    return "Dette er hovedsiden";
  }

  string get_en_side() const {
    return "Dette er en side";
  }

public:
  EchoServer() : endpoint(tcp::v4(), 8080), acceptor(io_service, endpoint) {}

  void start() {
    accept();

    io_service.run();
  }
};

int main() {
  EchoServer echo_server;

  cout << "Starting echo server" << endl
       << "Connect in a terminal with: telnet localhost 8080. Type 'exit' to end connection." << endl;

  echo_server.start();
}
