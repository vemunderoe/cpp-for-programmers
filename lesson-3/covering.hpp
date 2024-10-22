#pragma once

#include "material.hpp"
#include "surface.hpp"
#include <iostream>
#include <string>

const double limit = 0.02;

class Covering : public Material {
public:
  Covering(const std::string &name_, double price_, double width_);
  double get_width() const {
    return width;
  };
  void print() const;

private:
  double width;
};
