#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "a)" << endl;
  string word1, word2, word3;
  cout << "Skriv inn det første ordet: " << endl;
  cin >> word1;
  cout << "Skriv inn det andre ordet: " << endl;
  cin >> word2;
  cout << "Skriv inn det tredje ordet: " << endl;
  cin >> word3;

  cout << endl
       << "b)" << endl;

  string sentence;
  sentence.append(word1).append(" ").append(word2).append(" ").append(word3).append(".");
  cout << "Setningen din ble: " << sentence << endl;

  cout << endl
       << "c)" << endl;

  cout << "Det først ordet har lengde: " << word1.length() << endl;
  cout << "Det andre ordet har lengde: " << word2.length() << endl;
  cout << "Det tredje ordet har lengde: " << word3.length() << endl;
  cout << "Setningen har lengde: " << sentence.length() << endl;

  cout << endl
       << "d)" << endl;

  string sentence2 = sentence;

  cout << endl
       << "e)" << endl;

  if (sentence2.length() > 12) {
    sentence2.replace(9, 1, "x");
    sentence2.replace(10, 1, "x");
    sentence2.replace(11, 1, "x");
  } else {
    cout << "Kunne ikke bytte tegn nr 10-12 med x'er" << endl;
  }
  cout << "Setning1: " << sentence << endl;
  cout << "Setning2: " << sentence2 << endl;

  cout << endl
       << "f)" << endl;

  string sentence_start;
  if (sentence.length() >= 5) {
    sentence_start.append(sentence.substr(0, 5));
  } else {
    cout << "Kunne ikke hente ut de første 5 tegnene fra sentence" << endl;
  }

  cout << "Setning: " << sentence << endl;
  cout << "De første 5 tegnene i setningen: " << sentence_start << endl;

  cout << endl
       << "g)" << endl;

  if (sentence.find("hallo") != string::npos) {
    cout << "Setningen inneholder 'hallo'" << endl;
  } else {
    cout << "Setningen inneholder ikke 'hallo'" << endl;
  }

  cout << endl
       << "h)" << endl;
  int pos = 0;
  while (sentence.find("er", pos) != string::npos) {
    pos = sentence.find("er", pos);
    cout << "Setningen inneholder " << "'er' på tegn " << pos << endl;
    pos += 2;
  }
}
