#pragma once

#include <iostream>
#include <string>

//
// Material - super class
//
class Material {
public:
  const std::string &get_name() const {
    return name;
  };
  double get_price() const {
    return price;
  };

protected:
  Material(const std::string &name_, double price_);
  void print() const;

private:
  std::string name;
  double price;
};
