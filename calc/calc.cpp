#include <iostream>
using namespace std;

int main() {
	cout << endl << "Symbols: + - * / ^ v (v for roots)" << endl;
	while (5 > 4) {

		double number1 = 0;
		char symbol = '-';
		double number2 = 0;
		double outcome = 0;

		cin >> number1 >> symbol >> number2;

		int number1Int = number1;
		int number2Int = number2;

		if (symbol == 'v') {
			outcome = pow(number2, 1 / number1);
		} else if (symbol == '+') {
			outcome = number1 + number2;
		} else if (symbol == '-') {
			outcome = number1 - number2;
		} else if (symbol == '*') {
			outcome = number1 * number2;
		} else if (symbol == '/') {
			outcome = number1 / number2;
		} else if (symbol == '^') {
			outcome = pow(number1, number2);
		}

		cout << "= " << outcome << endl << endl;

	}
}
