#include <iostream>
#include <vector>
using namespace std;

const long long num = 987654321;

int main() {
  vector<long long> inputs = {1000, 1000000, 10000000000000ULL};

  for (long long N : inputs) {
    long long N_mod = N % num;
    long long N_minus_1_mod = (N_mod + num - 1) % num;
    long long N_squared_mod = (N_mod * N_mod) % num;
    long long N_squared_plus1_mod = (N_squared_mod + 1) % num;
    long long S = (N_minus_1_mod * N_squared_plus1_mod) % num;
    cout << S << endl;
  }

  cout << "Hungary" << endl;
  return 0;
}
