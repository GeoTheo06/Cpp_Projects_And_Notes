

// It is clear that we need to store the numbers in a list where each number has the person to whom it belongs because we need the connections between the people through these numbers.

#include <math.h>

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	vector<vector<int>> nums;  // i is the number and j is (are) the person(s) who has this number
	vector<int> root;		   // stores the root of each person
	for (int i = 0; i < n; i++) {
		root.push_back(-1);
	}

	for (int i = 0; i < 2 * pow(10, 5); i++) {
		nums.push_back({0});
	}

	int temp;
	for (int i = 0; i < n; i++) {
		cin >> m;
		for (int j = 0; j < m; j++) {
			cin >> temp;
			nums[temp].push_back(i);
		}
	}

	// for (int i = 0; i < nums.size(); i++) {
	// 	for (int j = 0; j < nums[i].size(); j++) {
	// 		if (nums[i][j] != 0) {
	// 			cout << i << ":" << nums[i][j] << " ";
	// 		}
	// 	}
	// }

	for (int i = 0; i < nums.size(); i++) {
		for (int j = 0; j < nums[i].size(); j++) {
			if (j == 0 && root[j] == -1) {
				root[j] == j;
			}

			if (j != 0) {
				if (root[j] == -1) {
					root[j] == root[j - 1];
				} else {
					for (int k = 0; k < n; k++) {
						if (root[k] == root[j - 1]) {
							root[k] == root[j];
						}
					}
				}
			}
		}
	}

	int initRoot = root[0];
	bool connected = true;
	for (int i = 0; i < n; i++) {
		if (root[0] != root[i]) {
			connected = false;
		}
	}
	if (!connected) {
		cout << "impossible";
	} else {
	}
}