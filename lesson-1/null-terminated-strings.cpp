#include <cctype>   // char-behandling
#include <cstring>  // strengbehandling
#include <iostream> // innlesing/utskrift

using namespace std; // Bruker standard navnerom, se cout nedenfor

int main() {
  char text[5]; // a string with max 5 characters
  cout << "Skriv et ord: ";
  cin.getline(text, 5);

  for (size_t i = 0; i < strlen(text); i++) { // size_t non-negative integer
    text[i] = toupper(text[i]);
  }
  cout << "Bare store bokstaver: " << text << endl;

  for (size_t j = 0; j < strlen(text); j++) {
    text[j] = tolower(text[j]);
  }
  cout << "Bare små bokstaver: " << text << endl;

  return 0;
}
