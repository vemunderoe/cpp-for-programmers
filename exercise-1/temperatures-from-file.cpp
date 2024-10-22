#include <fstream>
#include <iostream>

void read_temperatures(double temperatures[], int length);

int main() {
  const int length = 5;
  double temperatures[length];
  read_temperatures(temperatures, length);
  int under10 = 0;
  int between10and20 = 0;
  int over20 = 0;

  for (int i = 0; i < length; i++) {
    double temp = temperatures[i];
    if (temp < 10)
      under10++;
    else if (temp >= 10 && temp <= 20)
      between10and20++;
    else if (temp > 20)
      over20++;
  }

  std::cout << "Temperatures under 10: " << under10 << std::endl;
  std::cout << "Temperatures mellom 10 og 20: " << between10and20 << std::endl;
  std::cout << "Temperatures over 20: " << over20 << std::endl;
}

void read_temperatures(double temperatures[], int length) {
  std::cout << "Reading " << length << " temperatures from file..." << std::endl;
  const char filename[] = "temperatures.dat";
  std::ifstream file;
  file.open(filename);
  if (!file) {
    std::cout << "Something went wrong when opening the file." << std::endl;
    exit(EXIT_FAILURE);
  }

  for (int i = 0; i < length; i++) {
    file >> temperatures[i];
  }
  file.close();
  std::cout << "Done reading file." << std::endl;
}
