#include "pair.hpp"

template <typename Type1, typename Type2>
Pair<Type1, Type2>::Pair(Type1 _first, Type2 _second) : first(_first), second(_second) {};

template <typename Type1, typename Type2>
Pair<Type1, Type2> Pair<Type1, Type2>::operator+(const Pair &other) const {
  return Pair(first + other.first, second + other.second);
}

template <typename Type1, typename Type2>
bool Pair<Type1, Type2>::operator>(const Pair &other) const {
  auto sum = first + second;
  auto other_sum = other.first + other.second;
  return sum > other_sum;
}


template class Pair<double, int>;