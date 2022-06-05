#include <iostream>
#include <fstream>
using namespace std;

//create class with constructor
class Amaksi {
public:
    int rodes;
    bool timoni;
    string kafsimo;
    Amaksi(int rodes, bool timoni, string kafsimo) {
        this->rodes = rodes;
        this->timoni = timoni;
        this->kafsimo = kafsimo;
    }
};

int main() {
    ofstream arxeio("arxeio.txt");
    ifstream periexomenoArxeiou("arxeio.txt");

    string mathima;
    cout << "Ti emathes sthn C++ ? (Grapse \"kleise\" gia na kleiseis to arxeio)" << endl;
    cin >> mathima;

    while (mathima != "kleise") {
        arxeio << mathima << endl;
        cout << "Ti emathes sthn C++ ?" << endl;
        cin >> mathima;
    }
}