#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <windows.h>
#include <conio.h>

using namespace std;

class Calculator
{
private:
	bool doubleRoot;
	string equation;

	void copyToClipboard(const string& output)
	{
		const char* outputText = output.c_str();
		const size_t len = strlen(outputText) + 1;
		HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
		memcpy(GlobalLock(hMem), outputText, len);
		GlobalUnlock(hMem);
		OpenClipboard(0);
		EmptyClipboard();
		SetClipboardData(CF_TEXT, hMem);
		CloseClipboard();
	}

public:
	void performMathOperation(const string& input)
	{
		char symbol = 'g';
		string number1S = "0", number2S = "0";
		double number1 = 0, number2 = 0, result = 0;

		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '^' || input[i] == 'v')
			{
				symbol = input[i];
				for (int k = 0; k <= i - 1; k++)
				{
					number1S += input[k];
				}
				for (int m = i + 1; m < input.length(); m++)
				{
					number2S += input[m];
				}
			}
		}
		if (symbol == 'g')
		{
			cout << endl << "You wrote something wrong... Try again: " << endl << endl;
			return;
		}
		number1 = stoi(number1S);
		number2 = stoi(number2S);

		switch (symbol)
		{
			case '+': result = number1 + number2; break;
			case '-': result = number1 - number2; break;
			case '*': result = number1 * number2; break;
			case '/': result = number1 / number2; break;
			case '^': result = pow(number1, number2); break;
			case 'v': result = pow(number2, 1 / number1); break;
			default: break;
		}
		string resultString = to_string(result);

		copyToClipboard(resultString);

		cout << "= " << setprecision(100) << result << endl << endl;
	}

	void factorization(float x1, float x2)
	{
		cout << "The equation factorized is: " << equation << " = " << "(x";
		if (x1 > 0)
		{
			cout << " - " << x1;
		}
		else if (x1 < 0)
		{
			cout << " + " << x1;
		}
		cout << ") * (x";
		if (x2 > 0)
		{
			cout << " - " << x2;
		}
		else if (x2 < 0)
		{
			cout << " + " << x2;
		}
		cout << ")";
	}

	void calculateRoots(float D, int a, int b, int c)
	{
		if (doubleRoot)
		{
			float x = float(-b) / float(2 * a);
			cout << " which is " << endl << "x1,2 = " << x << endl;
			factorization(x, x);
		}
		else
		{
			float x1 = (-b + pow(D, 1 / 2)) / (2 * a);
			float x2 = (-b - pow(D, 1 / 2)) / (2 * a);
			cout << " which are: " << endl << "x1 = " << x1 << " and x2 = " << x2 << endl;
			factorization(x1, x2);
		}
	}void calculateD(int a, int b, int c)
	{
		float D = pow(b, 2) - (4 * a * c);
		cout << "D = " << D << "" << endl;
		if (D < 0)
		{
			cout << "This means that the equation is impossible (D can't be negative)";
		}
		else if (D == 0)
		{
			cout << "This means that the equation has only one real root";
			doubleRoot = true;
			calculateRoots(0, a, b, c);
		}
		else if (D > 0)
		{
			cout << "This means that the equation has two distinct complex roots";
			doubleRoot = false;
			calculateRoots(D, a, b, c);
		}
	}

	void parseEquation()
	{
		int a = 0, b = 0, c = 0, i = 0;
		string aS, bS, cS;
		i = 0;
		bool foundA = false;
		while (!foundA)
		{
			if (equation[i] == '*' && equation[i + 1] == 'x' && equation[i + 2] == '^' && equation[i + 3] == '2')
			{
				foundA = true;
			}
			else
			{
				aS += equation[i];
				i++;
			}
		}
		// Skipping the *x^2
		i += 4;
		bool foundB = false;
		while (!foundB)
		{
			if (equation[i - 3] == 'x' && equation[i - 2] == '^' && equation[i - 1] == '2')
			{
				if (equation[i] == '+')
				{
					i++;
				}
				else if (equation[i] == '-')
				{
					bS += '-';
					i++;
				}
			}
			else
			{
				if (equation[i] == '*' && equation[i + 1] == 'x')
				{
					foundB = true;
				}
				else
				{
					bS += equation[i];
					i++;
				}
			}
		}

		i += 2;
		bool foundC = false;
		while (!foundC)
		{
			if (equation[i - 2] == '*' && equation[i - 1] == 'x')
			{
				if (equation[i] == '+')
				{
					i++;
				}
				else if (equation[i] == '-')
				{
					cS += '-';
					i++;
				}
			}
			else
			{
				if (i == equation.length())
				{
					foundC = true;
				}
				else
				{
					cS += equation[i];
					i++;
				}
			}
		}
		a = stoi(aS);
		b = stoi(bS);
		c = stoi(cS);
		calculateD(a, b, c);
	}

	void solveQuadraticEquation(const string& input)
	{
		equation = input;
		parseEquation();
		cout << endl << endl << "waiting for next input:" << endl;
	}

	void calculateTrigFunction(const string& trigFunc, int angle)
	{
		if (trigFunc == "sin")
		{
			cout << " = " << sin(angle) << endl << endl;
		}
		else if (trigFunc == "cos")
		{
			cout << " = " << cos(angle) << endl << endl;
		}
		else if (trigFunc == "tan")
		{
			cout << " = " << tan(angle) << endl << endl;
		}
	}void calculateTrigExpression(const string& input)
	{
		string trigFunc, angleS;
		int angle;
		for (int i = 0; i < input.length(); i++)
		{
			if (i <= 2)
			{
				trigFunc += input[i];
			}
			else
			{
				angleS += input[i];
			}
		}

		angle = stoi(angleS);

		calculateTrigFunction(trigFunc, angle);
	}

	void processInput(const string& input)
	{
		bool isQuadratic = false;
		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] == 'x')
			{
				isQuadratic = true;
			}
		}
		if ((input[0] == 's' && input[1] == 'i' && input[2] == 'n') || (input[0] == 'c' && input[1] == 'o' && input[2] == 's') || (input[0] == 't' && input[1] == 'a' && input[2] == 'n'))
		{
			calculateTrigExpression(input);
		}
		else if (isQuadratic)
		{
			solveQuadraticEquation(input);
		}
		else
		{
			performMathOperation(input);
		}
	}
};

int main()
{
	cout << endl << "Normal Calculator Symbols: + | - | * | / | ^ | v (v for roots)" << endl << endl << "The output will be saved to the clipboard, so if you want to use it as input later, just ctrl + v ;) - works only for windows :(" << endl << endl << "If you want to use trigonometric functions, write sin, cos or tan and the angle you want next to it. For example: sin30" << endl << endl << "If you want to use quadratic equations, simply write the quadratic equation in this form: ax^2+bx+c (without spaces and don't avoid 1*x)" << endl << endl;
	Calculator calculator;

	string input = "";
	while (true)
	{
		cin >> input;
		calculator.processInput(input);
	}

	return 0;
}