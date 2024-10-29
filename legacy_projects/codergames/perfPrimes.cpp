#include <cmath>  // For pow function if you prefer
#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
  if (n == 1 || n == 0) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) return false;
  }
  return true;
}

// calculate 2^p
long long powerOfTwo(int p) {
  long long result = 1;
  for (int i = 0; i < p; i++) {
    result *= 2;
  }
  return result;
}

int main() {
  int count = 0;
  for (int p = 2;; ++p) {
    long long m = powerOfTwo(p) - 1;  // Compute Mersenne number 2^p - 1
    if (m > 100000000) break;
    if (isPrime(m)) {                       // Check if m is a prime number
      long long n = powerOfTwo(p - 1) * m;  // Compute the perfect number
      if (n > 100000000) break;
      cout << n << endl;
      count++;
      if (count == 5) break;
    }
  }
  return 0;
}
