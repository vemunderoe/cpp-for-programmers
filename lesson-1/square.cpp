#include <climits>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>

int main() {
  const char filename[] = "square.dat";
  std::ofstream file;
  file.open(filename);
  if (!file) {
    std::cout << "Feil ved åpning av utfil." << std::endl;
    exit(EXIT_FAILURE);
  }
  long int product = 1L;
  int exponent = 0;
  while (product <= LONG_MAX / 2L) {
    exponent++;
    product *= 2L;
    file << "2 opphøyd i " << std::setw(4) << exponent << " er " << product << std::endl;
  }
  file.close();
  return 0;
}
