#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

ostream &operator<<(ostream &out, const vector<int> &table) {
  for (auto &e : table)
    out << e << " ";
  return out;
}

bool almost_equal(int i, int j) {      
  return abs(i - j) <= 2;  
}

int main() {
  vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
  vector<int> v2 = {2, 3, 12, 14, 24};

  cout << "a)" << endl;

  auto element_in_v1_bigger_than_15 = find_if(v1.begin(), v1.end(), [](int value) { return value > 15; });
  cout << "v1: " << v1 << endl;
  cout << "First element in v1 bigger than 15: " << *element_in_v1_bigger_than_15 << endl;

  cout << endl << "b)" << endl;
  cout << "[v1.begin(), v.begin() + 5>: ";
  if (equal(v1.begin(), v1.begin() + 5, v2.begin(), almost_equal))
    cout << "Like!" << endl;
  else 
    cout << "Ikke like!" << endl;

  cout << "[v1.begin(), v.begin() + 4>: ";
  if (equal(v1.begin(), v1.begin() + 4, v2.begin(), almost_equal))
    cout << "Like!" << endl;
  else 
    cout << "Ikke like!" << endl;

  cout << endl << "c)" << endl;
  vector<int> v1_replaced(v1.size());
  cout << "v1: " << v1 << endl;
  replace_copy_if(v1.begin(), v1.end(), v1_replaced.begin(), [](int value) { return (value % 2) == 1; }, 100);
  cout << "v1_replaced: " << v1_replaced << endl;
}