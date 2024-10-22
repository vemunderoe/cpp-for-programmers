#include "commodity.hpp"

Commodity::Commodity(string name_, int id_, double price_) : name(name_), id(id_), price(price_) {}

string Commodity::get_name() const {
  return name;
};

int Commodity::get_id() const {
  return id;
}

double Commodity::get_price() const {
  return price;
}

double Commodity::get_price(double quantity) const {
  return price * quantity;
}

void Commodity::set_price(double newPrice) {
  price = newPrice;
}

double Commodity::get_price_with_sales_tax() const {
  return price * 1.25;
}

double Commodity::get_price_with_sales_tax(double quantity) const {
  return price * 1.25 * quantity;
}
