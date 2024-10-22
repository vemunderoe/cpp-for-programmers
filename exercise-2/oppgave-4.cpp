#include <iostream>

int main() {
  // Original kode:
  // int a = 5;
  // int &b; // Syntaksfeil, en referanse-variabel må bli initialisert.
  // int *c;
  // c = &b;
  // *a = *b + *c; // Syntaksfeil, siden a ikke er en peker kan man ikke indirekte adressere. b er heller ikke en peker
  // &b = 2; // Syntaksfeil, man kan ikke reinitialisere en referanse

  // Fikset kode
  int a = 5;
  int w = 6;
  int &b = a;
  int *c;
  c = &b;
  a = b + *c;
  b = 2;
}
