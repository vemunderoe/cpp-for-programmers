#include <iostream>

int main() {
  double number = 1.3;

  double *pointer = &number;
  double &reference = number;

  std::cout << "number: " << number << std::endl;

  // Første måten
  number = 4.2;
  std::cout << "number: " << number << std::endl;

  // Andre måten
  *pointer = 6.9;
  std::cout << "number: " << number << std::endl;

  // Tredje måten
  reference = 8.3;
  std::cout << "number: " << number << std::endl;
}
