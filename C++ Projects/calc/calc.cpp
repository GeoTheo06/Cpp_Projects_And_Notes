#include <iostream>
using namespace std;

int main() {
    cout << endl << "Symbola: + - * / ^" << endl << "an thes riza grapse \"!1\" meta ton arithmo" << endl;
    while (5 > 4) {

        double number1 = 0;
        char symbol = '-';
        double number2 = 0;
        double apotelesma = 0;

        cin >> number1 >> symbol >> number2;

        if (symbol == '!') {
            cout << "= " << sqrt(number1) << endl << endl;
        }
        else {
            if (symbol == '+') {
                apotelesma = number1 + number2;
            }
            else if (symbol == '-') {
                apotelesma = number1 - number2;
            }
            else if (symbol == '*') {
                apotelesma = number1 * number2;
            }
            else if (symbol == '/') {
                apotelesma = number1 / number2;
            }
            else if (symbol == '^') {
                apotelesma = pow(number1, number2);
            }

            cout << "= " << apotelesma << endl << endl;
        }
    }
}