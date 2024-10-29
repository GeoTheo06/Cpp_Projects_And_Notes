#include <algorithm>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
  // Read the entire line of input
  string line;

  string file_path = "in.txt";

  // Create an input file stream
  ifstream file(file_path);
  getline(file, line);
  
  istringstream iss(line);
  int num;
  int min_val = INT32_MAX;
  int max_val = INT32_MIN;
  unordered_set<int> nums_set;

  while (iss >> num) {
    nums_set.insert(num);
    if (num < min_val) min_val = num;
    if (num > max_val) max_val = num;
  }

  vector<int> missing_numbers;

  for (int i = min_val; i <= max_val; ++i) {
    if (nums_set.find(i) == nums_set.end()) {
      missing_numbers.push_back(i);
    }
  }

  // Output
  cout << missing_numbers.size() << ": ";
  for (size_t i = 0; i < missing_numbers.size(); ++i) {
    if (i > 0) cout << ", ";
    cout << missing_numbers[i];
  }
  cout << endl;

  return 0;
}
