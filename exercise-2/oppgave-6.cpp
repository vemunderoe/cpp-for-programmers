#include <iostream>

int find_sum(const int *table, int length);

int main() {
  int table[20];
  for (int i = 0; i < 20; i++) {
    table[i] = i + 1;
    std::cout << "table[" << i << "]: " << i + 1 << std::endl;
  }

  int *pointer = table;
  std::cout << "Resultat av find_sum av de 10 første: " << find_sum(pointer, 10) << std::endl;
  pointer += 10; // Flytte pekeren 10 hakk for å finne de 5 neste
  std::cout << "Resultat av find_sum av de 5 neste: " << find_sum(pointer, 5) << std::endl;
  pointer += 5; // Flytte pekeren 5 hakk for å finne de 5 siste
  std::cout << "Resultat av find_sum av de 5 siste: " << find_sum(pointer, 5) << std::endl;
}

int find_sum(const int *table, int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += *table;
    table++;
  }
  return sum;
}
