#include <iostream>

int main() {
  std::cout << "Type in 5 temperatures.\n";
  const int length = 3;
  int under10 = 0;
  int between10and20 = 0;
  int over20 = 0;

  for (int i = 0; i < length; i++) {
    double temp;
    std::cout << "Temperature nr " << i + 1 << ": ";
    std::cin >> temp;
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
