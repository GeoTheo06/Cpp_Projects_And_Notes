#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <conio.h>

using namespace std;

bool doubleRoot;
string equation;

//math operations
int myMathOperation(string input) {
	char symbol = 'g';
	string number1S = "0", number2S = "0";
	double number1 = 0, number2 = 0, result = 0;

	for (int i = 0; i < input.length(); i++) {
		if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '^' || input[i] == 'v') {
			symbol = input[i];
			for (int k = 0; k <= i - 1; k++) {
				number1S += input[k];
			}
			for (int m = i + 1; m < input.length(); m++) {
				number2S += input[m];
			}
		}
	}
	if (symbol == 'g') {
		cout << endl << "You wrote something wrong... Try again: " << endl << endl;
		return 0;
	}
	number1 = stoi(number1S);
	number2 = stoi(number2S);

	switch (symbol) {
		case '+': result = number1 + number2; break;
		case '-': result = number1 - number2; break;
		case '*': result = number1 * number2; break;
		case '/': result = number1 / number2; break;
		case '^': result = pow(number1, number2); break;
		case 'v': result = pow(number2, 1 / number1); break;
		default: break;
	}
	string resultString = to_string(result);

	//copy output to clipboard
	const char* output = resultString.c_str();
	const size_t len = strlen(output) + 1;
	HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
	memcpy(GlobalLock(hMem), output, len);
	GlobalUnlock(hMem);
	OpenClipboard(0);
	EmptyClipboard();
	SetClipboardData(CF_TEXT, hMem);
	CloseClipboard();

	cout << "= " << setprecision(100) << result << endl << endl;
	return 0;
}

//quadratic equation
void factorization(float x1, float x2) {
	cout << "The equation factorized is: " << equation << " = " << "(x";
	if (x1 > 0) {
		cout << " - " << x1;
	} else if (x1 < 0) {
		cout << " + " << x1;
	}
	cout << ") * (x";
	if (x2 > 0) {
		cout << " - " << x2;
	} else if (x2 < 0) {
		cout << " + " << x2;
	}
	cout << ")";
}
void calculateRoots(float D, int a, int b, int c) {
	if (doubleRoot) {
		float x = float(-b) / float(2 * a);
		cout << " which is " << endl << "x1,2 = " << x << endl;
		factorization(x, x);
	} else {
		float x1 = (-b + pow(D, 1 / 2)) / (2 * a);
		float x2 = (-b - pow(D, 1 / 2)) / (2 * a);
		cout << " which are: " << endl << "x1 = " << x1 << " and x2 = " << x2 << endl;
		factorization(x1, x2);
	}

}
void calculateD(int a, int b, int c) {
	float D = pow(b, 2) - (4 * a * c);
	cout << "D = " << D << "" << endl;
	if (D < 0) {
		cout << "This means that the equation is impossible (D can't be negative)";
	} else if (D == 0) {
		cout << "This means that the equation has only one real root";
		doubleRoot = true;
		calculateRoots(0, a, b, c);
	} else if (D > 0) {
		cout << "This means that the equation has two distinct complex roots";
		doubleRoot = false;
		calculateRoots(D, a, b, c);
	}
}
void get_a_b_c() {
	int a = 0, b = 0, c = 0, i = 0;
	string aS, bS, cS;
	i = 0;
	bool foundA = false;
	while (!foundA) {
		if (equation[i] == '*' && equation[i + 1] == 'x' && equation[i + 2] == '^' && equation[i + 3] == '2') {
			foundA = true;
		} else {
			aS += equation[i];
			i++;
		}
	}
	//skipping the *x^2
	i += 4;
	bool foundB = false;
	while (!foundB) {
		if (equation[i - 3] == 'x' && equation[i - 2] == '^' && equation[i - 1] == '2') {

			if (equation[i] == '+') {
				i++;
			} else if (equation[i] == '-') {
				bS += '-';
				i++;
			}
		} else {
			if (equation[i] == '*' && equation[i + 1] == 'x') {
				foundB = true;
			} else {
				bS += equation[i];
				i++;
			}
		}
	}

	i += 2;
	bool foundC = false;
	while (!foundC) {
		if (equation[i - 2] == '*' && equation[i - 1] == 'x') {

			if (equation[i] == '+') {
				i++;
			} else if (equation[i] == '-') {
				cS += '-';
				i++;
			}
		} else {
			if (i == equation.length()) {
				foundC = true;
			} else {
				cS += equation[i];
				i++;
			}
		}
	}
	a = stoi(aS); b = stoi(bS); c = stoi(cS);
	calculateD(a, b, c);
}
void myQuadraticEquation(string input) {
	equation = input;
	get_a_b_c();
	cout << endl << endl << "waiting for next input:" << endl;
}

//trigonometric functions
void sinCalculator(int angle) {
	cout << " = " << sin(angle) << endl << endl;
}
void cosCalculator(int angle) {
	cout << " = " << cos(angle) << endl << endl;
}
void tanCalculator(int angle) {
	cout << " = " << tan(angle) << endl << endl;
}
void sinCosTanCalculator(string input) {
	string trigFunc, angleS;
	int angle;
	for (int i = 0; i < input.length(); i++) {
		if (i <= 2) {
			trigFunc += input[i];
		} else {
			angleS += input[i];
		}
	}

	angle = stoi(angleS);

	if (trigFunc == "sin") {
		sinCalculator(angle);
	} else if (trigFunc == "cos") {
		cosCalculator(angle);
	} else if (trigFunc == "tan") {
		tanCalculator(angle);
	}
}

//find which calculator to use
void findCalc(string input) {
	bool isQuadratic = false;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == 'x') {
			isQuadratic = true;
		}
	}
	if ((input[0] == 's' && input[1] == 'i' && input[2] == 'n') || (input[0] == 'c' && input[1] == 'o' && input[2] == 's') || (input[0] == 't' && input[1] == 'a' && input[2] == 'n')) {
		sinCosTanCalculator(input);
	} else if (isQuadratic) {
		myQuadraticEquation(input);
	} else {
		myMathOperation(input);
	}
}

int main() {

	cout << endl << "Normal Calculator Symbols: + | - | * | / | ^ | v (v for roots)" << endl << endl << "The output will be saved to the clipboard, so if you want to use it as input later, just ctrl + v ;) - works only  for windows :(" << endl << endl << "If you want to use  trigonometric functions, write sin, cos or tan and the angle you want next to it. For example: sin30" << endl << endl << "If you want to use quadratic equations, simply write the quadratic equation in this form: a*x^2+b*x+c (without spaces and don't avoid 1*x)" << endl << endl;

	string input = "";
	while (true) {
		cin >> input;
		findCalc(input);
	}
}