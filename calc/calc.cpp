#include <iostream>
using namespace std;

int main() {
	cout << endl << "Symbola: + - * / ^" << endl;
	while (5 > 4) {

		double number1 = 0;
		char symbol = '-';
		double number2 = 0;
		double apotelesma = 0;

		cin >> number1 >> symbol >> number2;

		int number1Int = number1;
		int number2Int = number2;

		if (symbol == '^') {
			apotelesma = number1Int ^ number2Int;
		} else if (symbol == '+') {
			apotelesma = number1 + number2;
		} else if (symbol == '-') {
			apotelesma = number1 - number2;
		} else if (symbol == '*') {
			apotelesma = number1 * number2;
		} else if (symbol == '/') {
			apotelesma = number1 / number2;
		} else if (symbol == '^') {
			apotelesma = pow(number1, number2);
		}

		cout << "= " << apotelesma << endl << endl;

	}
}
