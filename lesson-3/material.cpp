#include "material.hpp"

Material::Material(const std::string &name_, double price_) : name(name_), price(price_) {};

void Material::print() const {
  std::cout << "Navn: " << name << std::endl
            << "Pris: " << price << std::endl;
}
