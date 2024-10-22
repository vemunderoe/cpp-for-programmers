#include <iostream>

int main() {
  // A)
  int i = 3;
  int j = 5;
  int *p = &i;
  int *q = &j;

  // Tror i og p har samme addresse, og samme med j og q
  std::cout << "i har addresse: " << &i << ", og verdi " << i << std::endl;
  std::cout << "j har addresse: " << &j << ", og verdi " << j << std::endl;
  std::cout << "p har addresse: " << p << ", og verdi " << *p << std::endl;
  std::cout << "q har addresse: " << q << ", og verdi " << *q << std::endl;

  // B)
  *p = 7;
  *q += 4;
  *q = *p + 1;
  p = q;
  std::cout << *p << " " << *q << std::endl; // "8 8" blir skrevet ut
}
