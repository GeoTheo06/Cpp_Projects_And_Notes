#include <iostream>
using namespace std;
int number[50];
int counter = 0;

void test() {
	for (counter; counter < 50; counter++) {
		number[counter] = counter;
	}
}
int main() {
	test();
	for (int i = 0; i < 50; i++) {
		cout << number[i] << endl;
	}
}