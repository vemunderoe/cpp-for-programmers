#include <iostream>

int number = 3;
int *pointer; // A pointer

int main() {
  // * in variable definition means a pointer
  // & in means the address of

  pointer = &number; // Points to the address of the variable "number"
  std::cout << "number: " << number << std::endl;
  std::cout << "*pointer - address: " << pointer << ", value: " << *pointer << std::endl; // Dereferencing the pointer to get the value in that address

  *pointer = 6; // Sets the value of the address the variable "pointer" points to, in this case the value of the variable "number". This is called "indirect addressing"
  std::cout << "number: " << number << std::endl;

  const int tableLength = 10;
  int table[tableLength] = {20, 21, 22, 23, 24, 25, 26, 27, 28, 29}; // The variable table is the address of the first element
  std::cout << "table - address: " << table << ", value: " << *table << std::endl;

  int *pointerToTableElement = &table[4];
  std::cout << "*pointerToTableElement - address: " << pointerToTableElement << ", value: " << *pointerToTableElement << std::endl;

  const int max = 100; // constant variable
  // max = 200; will give compilation error

  const int *constantInteger = &number; // constant value in the address the pointer points to, can not change value in that address, but can change address
  //*constantInteger = 100; // Not allowed, gives compilation error
  constantInteger = &max; // Allowed

  int *const constantPointer = &number; // Constant pointer, can not change address it points to, but can change value in address
  *constantPointer = 5;                 // Allowed
  int number2 = 4;
  //*constantPointer = &number2; // Not allowed

  const int *const constantPointerAndValueInPointer = &number; // Not allowed to either change address or value in address
  //*constantPointerAndValueInPointer = 5; // Not allowed
  //*constantPointerAndValueInPointer = &number2;

  double table2[5];
  double *pointerToTable;
  pointerToTable = table2;
  *pointer = 0.0;            // table2[0] gets value 0.0
  *(pointer + 1) = *pointer; // table2[1] gets same value as table2[0]
  pointer++;                 // pointer points to table2[1]

  // Pointer addition to traverse table
  pointer = table;
  for (int i = 0; i < tableLength; i++) {
    std::cout << "table[" << i << "]: " << *pointer << std::endl;
    pointer++;
  }

  // Pointer subtraction to
  // Find the length between two elements with pointer subtraction
  const char *text = "an example";
  const char *start = text;
  while (*text != '\0')
    text++;
  int lengthOfText = text - start;
  std::cout << "Length of text is: " << lengthOfText << std::endl;

  std::cout << std::endl;
  std::cout << std::endl;

  // if (pointer1 == pointer2) check if the two pointers contains the same address
  // if (*pointer1 == *pointer2) checks if the value in the two addresses is the same

  // References
  int value = 123;
  int &justAnotherNameOfValue = value; // Value just with another variable name

  std::cout << "value: " << value << std::endl;
  std::cout << "justAnotherNameOfValue: " << justAnotherNameOfValue << std::endl;

  std::cout << std::endl;

  justAnotherNameOfValue = 124;
  std::cout << "value: " << value << std::endl;
  std::cout << "justAnotherNameOfValue: " << justAnotherNameOfValue << std::endl;

  value++;
  std::cout << "value: " << value << std::endl;
  std::cout << "justAnotherNameOfValue: " << justAnotherNameOfValue << std::endl;
}
