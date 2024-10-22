#pragma once
#include <vector>

class Set {
public:
  Set();
  Set(const Set &) = default;
  Set operator|(const Set &other) const;
  Set &operator+=(const int integer);
  Set &operator=(const Set &other);
  void print() const;

private:
  std::vector<int> numbers;
  bool contains(const int integer) const;
};
