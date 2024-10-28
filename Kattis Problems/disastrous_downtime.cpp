#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int *reqStart = new int[n];
	int *reqEnd = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> reqStart[i];
		reqEnd[i] = reqStart[i] + 1000;
	}
	vector<vector<int>> req;  // 0 starts for start 1 stands for end
	int counter1 = 0, counter2 = 0;
	for (int i = 0; i < n * 2; i++) {
		if (counter1 != n && reqStart[counter1] < reqEnd[counter2]) {
			req.push_back({reqStart[counter1], 0});
			counter1++;
		} else {
			req.push_back({reqEnd[counter2], 1});
			counter2++;
		}
	}
	int counter = 0, max = 0;
	for (int i = 0; i < n * 2; i++) {
		if (req[i][1] == 0) {
			counter++;
			if (counter > max) {
				max = counter;
			}
		} else {
			counter--;
		}
	}
	if (max % k == 0) {
		cout << max / k << '\n';
	} else {
		cout << max / k + 1 << '\n';
	}
}