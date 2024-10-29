#include <iostream>

using namespace std;

// sums all numbers from 1 to n.
int sum(int n) {
    if (n == 0) {
        return 0;
    }
    return sum(n - 1) + n;
}

int main() {
    int n;
    cin >> n;
    cout << sum(n);
}