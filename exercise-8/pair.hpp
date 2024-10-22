#pragma once

template <typename Type1, typename Type2>
class Pair {
  public:
    Type1 first;
    Type2 second;  
    
    // Constructor
    Pair(Type1 first, Type2 second);

    // Operator overloading
    Pair operator+(const Pair &other) const;
    bool operator>(const Pair &other) const;
};