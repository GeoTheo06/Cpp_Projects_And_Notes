#include <iostream>
#include <vector>
using namespace std;

int fib(int n, vector<int> &res) {
    if (n == 1) {
        return 1;
    }
    if (n == 0) {
        return 0;
    }

    int temp1, temp2;
    if (res[n - 1] != -1) {
        temp1 = res[n - 1];
    } else {
        temp1 = fib(n - 1, res);
        res[n - 1] = temp1;
    }
    if (res[n - 2] != -1) {
        temp2 = res[n - 2];
    } else {
        temp2 = fib(n - 2, res);
        res[n - 2] = temp2;
    }
    return temp1 + temp2;
}

int main() {
    vector<int> res;

    int n;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        res.push_back(-1);
    }
    cout << fib(n, res);
}