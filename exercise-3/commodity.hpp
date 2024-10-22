#pragma once
#include <string>

using namespace std;

class Commodity {
public:
  Commodity(string name_, int id, double price_);
  string get_name() const;
  int get_id() const;
  double get_price() const;
  double get_price(double quantity) const;
  void set_price(double newPrice);
  double get_price_with_sales_tax() const;
  double get_price_with_sales_tax(double quantity) const;

private:
  string name;
  int id;
  double price;
};
