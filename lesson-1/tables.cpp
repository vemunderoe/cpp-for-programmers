#include <iostream>

using namespace std; // Bruker standard navnerom, se cout nedenfor

int main() {
  int a;
  int b[3]; // en heltallstabell med 3 elementer
  double c;
  cout << "a = " << a << ", c = " << c << endl;

  for (int i = 0; i < 5; i++) {
    cout << "i = " << i << " tabellelement: " << b[i] << endl;
  }
  return 0;
}
