#include <iostream>

void valueTransfer(int number);
void referenceTransfer(int &number);

int main() {
  int original = 123;
  std::cout << "original before value transfer: " << original << std::endl;
  valueTransfer(original);
  std::cout << "original after value transfer: " << original << std::endl
            << std::endl;

  std::cout << "original before reference transfer: " << original << std::endl;
  referenceTransfer(original);
  std::cout << "original after reference transfer: " << original << std::endl;
}

void valueTransfer(int number) {
  number++;
}

void referenceTransfer(int &number) {
  number++;
}
