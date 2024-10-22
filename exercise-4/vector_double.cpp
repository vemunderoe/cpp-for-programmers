#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<double> doubles = {2.1, 3.4, 1.3, 2.2};

  cout << "Første tallet i doubles: " << doubles.front() << endl;
  cout << "Siste tallet i doubles: " << doubles.back() << endl;

  doubles.emplace(doubles.begin() + 1, 8.8);

  cout << "Første tallet i doubles: " << doubles.front() << endl;
  auto iterator = find(doubles.begin(), doubles.end(), 1.3);

  if (iterator != doubles.end()) {
    cout << *iterator << endl;
  }
}
