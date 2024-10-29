#include "pair.hpp"
#include <iostream>
#include <iomanip>

template <typename Type> 
bool equal(Type a, Type b) {
  std::cout << "Using template function - checking equality for a: " << a << " and b: " << b << std::endl;
  return a == b;
}

bool equal(double a, double b) {
  std::cout << "Using double function - checking equality for a: " << a << " and b: " << b << std::endl;
  return a - b < 0.00001;
}


int main() {
  std::cout << std::fixed << std::setprecision(10);
  std::cout << "Task 1" << std::endl;

  std::cout << equal("a", "a") << std::endl;
  std::cout << equal("a", "b") << std::endl;
  std::cout << equal(1, 1) << std::endl;
  std::cout << equal(1, 0) << std::endl;
  std::cout << equal(1.00001, 1.00001) << std::endl;
  std::cout << equal(1.0000002, 1.0000001) << std::endl;
  std::cout << equal(1.0002, 1.0001) << std::endl;

  std::cout << std::endl;

  std::cout << "Task 2" << std::endl;
  Pair<double, int> p1(3.5, 14);
  Pair<double, int> p2(2.1, 7);
  std::cout << "p1: " << p1.first << ", " << p1.second << std::endl;
  std::cout << "p2: " << p2.first << ", " << p2.second << std::endl;

  if (p1 > p2)
    std::cout << "p1 er størst" << std::endl;
  else
    std::cout << "p2 er størst" << std::endl;

  auto sum = p1 + p2;
  std::cout << "Sum: " << sum.first << ", " << sum.second << std::endl;

  return 0;
}