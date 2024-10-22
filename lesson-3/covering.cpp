#include "covering.hpp"
#include <string>

using namespace std;

Covering::Covering(const string &name_, double price_, double width_) : Material(name_, price_), width(width_) {}

void Covering::print() const {
  Material::print();
  cout << "For belegg: " << endl
       << "Bredde: " << width << endl;
}
