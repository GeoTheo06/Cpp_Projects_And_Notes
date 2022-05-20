#include <iostream>
using namespace std;

class MyClass {
	//protected: 
public: //accessible se olo ton kwdika
	int x = 10; //dhmosia idiothta

private: //accessible mono mesa sthn klash
	int y = 10; //private idiothta

};
//mporeis kai pali na pareis timh mesa apo private xrhsimopoiontas get and set (sthn ousia einai methods) o tropos onomazetai encaptulation:
class Ergazomenos {
private:
	int misthos;

public:
	void setMisthos(int valueMisthos) {
		misthos = valueMisthos;
	}
	int getMisthos() {
		return misthos;
	}
};

int main() {
	MyClass klash;

	//cout << klash.x; leitourgei epeidh einai public
	// cout << klash.y; den leitourgei epeidh einai private

	//o tropos gia na pareis timh mesa apo get and set
	Ergazomenos giwrgos;
	giwrgos.setMisthos(5000);
	cout << giwrgos.getMisthos();
}