#include <algorithm>
#include <climits>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

struct Result {
  long long compactness;
  long long moves;
};

Result solve_dimension(int size, vector<int>& positions) {
  int k = positions.size();
  sort(positions.begin(), positions.end());
  vector<int> extended_positions = positions;
  for (int pos : positions) {
    extended_positions.push_back(pos + size);
  }

  long long min_compactness = LLONG_MAX;
  long long min_moves = LLONG_MAX;

  for (int i = 0; i < k; ++i) {
    int start = extended_positions[i];
    int end = extended_positions[i + k - 1];
    long long interval_length = end - start;
    if (interval_length < size) {
      long long occupied = interval_length + 1;
      long long shift = start % size;
      long long moves = min(shift, size - shift);
      if (occupied < min_compactness) {
        min_compactness = occupied;
        min_moves = moves;
      } else if (occupied == min_compactness) {
        if (moves < min_moves) {
          min_moves = moves;
        }
      }
    }
  }

  return {min_compactness, min_moves};
}

void read_input(int& a, int& b, int& c) {
  string line;
  getline(cin, line);
  replace(line.begin(), line.end(), ';',
          ' ');
  stringstream ss(line);
  ss >> a >> b >> c;
}

void read_positions(int k, vector<int>& rows, vector<int>& cols) {
  for (int i = 0; i < k; ++i) {
    string line;
    getline(cin, line);
    replace(line.begin(), line.end(), ';',
            ' '); 
    stringstream ss(line);
    ss >> rows[i] >> cols[i];
    --rows[i];
    --cols[i];
  }
}
int main() {
  int h, w, k;
  read_input(h, w, k);

  vector<int> rows(k), cols(k);
  read_positions(
      k, rows,
      cols);

  Result row_result = solve_dimension(h, rows);
  Result col_result = solve_dimension(w, cols);

  long long total_compactness = row_result.compactness * col_result.compactness;
  long long total_moves = row_result.moves + col_result.moves;

  cout << total_compactness << "; " << total_moves << endl;

  return 0;
}
