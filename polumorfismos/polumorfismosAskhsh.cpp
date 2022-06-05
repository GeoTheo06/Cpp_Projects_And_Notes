#include <iostream>
using namespace std;

class McDonalds {
public:
    void Ergazomenoi() {
        cout << "Synolikoos arithmws ergatwn: 1000" << endl;
    }
};

class Katasthma1 : public McDonalds {
public:
    void Ergazomenoi() {
        cout << "arithmos ergatwn katasthmatos 1: 250" << endl;
    }
};

class Katasthma2 : public McDonalds {
public:
    void Ergazomenoi() {
        cout << "arithmos ergatwn katasthmatos 2: 250" << endl;
    }
};

class Katasthma3 : public McDonalds {
public:
    void Ergazomenoi() {
        cout << "Synolikos arithmos ergatwn katasthmatos 3: 250" << endl;
    }
};

class Katasthma4 : public McDonalds {
public:
    void Ergazomenoi() {
        cout << "Synolikos arithmos ergatwn katasthmatos 4: 250" << endl;
    }
};

int main() {
    McDonalds naiExwTaMcDonalds;
    naiExwTaMcDonalds.Ergazomenoi();

    Katasthma1 prwtoKatasthma;
    prwtoKatasthma.Ergazomenoi();

    Katasthma2 deyteroKatasthma;
    deyteroKatasthma.Ergazomenoi();

    Katasthma3 tritoKatasthma;
    tritoKatasthma.Ergazomenoi();

    Katasthma4 tetartoKatasthma;
    tetartoKatasthma.Ergazomenoi();
}