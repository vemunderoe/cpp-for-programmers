#include "set.hpp"
#include <iostream>

Set::Set() {
  numbers = {};
}

Set Set::operator|(const Set &other) const {
  Set set = *this;
  // Loop through others set and add new numbers
  for (auto iterator = other.numbers.begin(); iterator != other.numbers.end(); ++iterator) {
    if (!this->contains(*iterator)) {
      set.numbers.emplace_back(*iterator);
    }
  }
  return set;
}

Set &Set::operator+=(int integer) {
  if (!this->contains(integer)) {
    numbers.emplace_back(integer);
  }
  return *this;
}

Set &Set::operator=(const Set &other) {
  numbers = other.numbers;
  return *this;
}

void Set::print() const {
  std::cout << "{";
  for (auto iterator = numbers.begin(); iterator != numbers.end(); ++iterator) {
    std::cout << *iterator;
    if (std::next(iterator) != numbers.end()) {
      std::cout << ", ";
    }
  }

  std::cout << "}" << std::endl;
}

bool Set::contains(const int integer) const {
  for (const int &number : numbers) {
    if (number == integer) {
      return true;
    }
  }
  return false;
}
