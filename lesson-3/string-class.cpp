#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  string name = "Vemund";
  cout << name << endl;

  int age = 18;
  string ageAsString = to_string(age);

  istringstream iss;
  int int_number;
  double double_number;

  iss.str("10 12.5");

  iss >> int_number;
  iss >> double_number;

  cout << "int_number: " << int_number << ", double_number: " << double_number << endl;
}
