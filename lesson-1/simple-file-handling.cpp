#include <cstdlib>
#include <fstream>
#include <iostream>

int main() {
  const char filename[] = "tallfil.dat";
  std::ifstream file;
  file.open(filename);
  if (!file) {
    std::cout << "Feil ved åpning av innfil." << std::endl;
    exit(EXIT_FAILURE);
  }

  int number;
  int sum = 0;
  while (file >> number) {
    sum += number;
  }
  std::cout << "Summen er " << sum << std::endl;
  file.close();
  return 0;
}
