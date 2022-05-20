#include <iostream>
using namespace std;
int number[50];

void test() {
	for (int i = 0; i < 25; i++) {
		number[i] = i;
	}
	for (int i = 0; i < 50; i++) {
		cout << number[i] << endl;
	}
}
int main() {
	test();
	test();
}