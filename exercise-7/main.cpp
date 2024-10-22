#include "fraction.hpp"
#include "set.hpp"
#include <iostream>
#include <string>

using namespace std;

void print(const string &text, const Fraction &broek) {
  cout << text << broek.numerator << " / " << broek.denominator << endl;
}

int main() {
  cout << "Task 1:" << endl;
  Fraction fraction1(1, 2);
  print("fraction1 = ", fraction1);
  print("fraction1 - 5 = ", fraction1 - 5);
  print("fraction1 = ", fraction1);
  print("5 - fraction1 = ", 5 - fraction1);
  Fraction fraction2(3, 2);

  cout << endl
       << "Task 2:" << endl;

  Set set1;
  set1 += 1;
  set1 += 4;
  set1 += 3;
  cout << "set1: ";
  set1.print();

  Set set2;
  set2 += 4;
  set2 += 7;
  cout << "set2: ";
  set2.print();

  Set unionset = set1 | set2;
  cout << "unionset: ";
  unionset.print();

  Set set3;
  set3 = set1;
  cout << "set1: ";
  set1.print();
  cout << "set3: ";
  set3.print();
  set1 += 10;
  cout << "set1: ";
  set1.print();
  cout << "set3: ";
  set3.print();
}
