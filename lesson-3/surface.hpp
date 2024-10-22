#pragma once

#include <string>

using namespace std;

// Defining the class
class Surface {
public:
  Surface(const string &name, double length_, double width_); // Class constructor
  const string &get_name() const;
  double get_length() const;
  double get_width() const;
  double get_area() const;
  double get_circumference() const;
  void set_length(double length);

private:
  string name; // For identification
  double length;
  double width;
};
