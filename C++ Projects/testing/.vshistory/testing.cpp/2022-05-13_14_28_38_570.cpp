#include <iostream>
using namespace std;

void test() {
	int number[50];
	for (int i = 0; i < 25; i++) {
		number[i] = i;
	}
	for (int i = 0; i < 50; i++) {
		cout << number[i];
	}
}
int main() {
	test();
	test();
}