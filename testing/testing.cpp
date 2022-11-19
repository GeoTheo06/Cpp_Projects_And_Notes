#include <string>
#include<iostream>
#include <vector>
using namespace std;

void findOdd(vector<int> numbers) {
	int counter = 0;
	for (int i = 0; i < numbers.size() - 1; i++) {
		counter = 0;
		for (int k = 0; k < numbers.size() - 1; k++) {
			if (numbers[i] == numbers[k]) {
				counter++;
			}
		}
		if (counter % 2 == 1) {
			cout << numbers[i];
		}
	}
}

int main() {
	findOdd({ 1, 2, 1, 5 });
}