#include "surface.hpp"
#include <iostream>
#include <string>

using namespace std;

// Implementation of the class
Surface::Surface(const string &name_, double length_, double width_) : name(name_), length(length_), width(width_) {}

const string &Surface::get_name() const { // const at the end tells the user that the method doesnt change any data
  return name;
}

double Surface::get_length() const {
  return length;
}

double Surface::get_width() const {
  return width;
}

double Surface::get_area() const {
  return length * width;
}

double Surface::get_circumference() const {
  return 2 * (length + width);
}

void Surface::set_length(double length) {
  this->length = length;
}

int main() {
  Surface floor("Bobs floor", 10, 3);

  cout << "Data about: " << floor.get_name() << endl;
  cout << "Length: " << floor.get_length() << endl;
  cout << "Width: " << floor.get_width() << endl;
  cout << "Area: " << floor.get_area() << endl;
  cout << "Circumference: " << floor.get_circumference() << endl;

  cout << "Setting length to 11 from 10" << endl;
  floor.set_length(11);

  cout << "Data about: " << floor.get_name() << " after changing length" << endl;
  cout << "Length: " << floor.get_length() << endl;
  cout << "Width: " << floor.get_width() << endl;
  cout << "Area: " << floor.get_area() << endl;
  cout << "Circumference: " << floor.get_circumference() << endl;
}
