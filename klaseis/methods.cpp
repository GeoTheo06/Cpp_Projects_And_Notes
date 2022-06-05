#include <iostream>
using namespace std;

class MiaKlash {
public:
	void methodos() {//esoterikh dhlosh methodou
		cout << "h proth methodos";
	}
	void methodos2();//arxikopoihsh ekswterikhs methodou

	int methodos3(int timi);
	int methodos4(int timi) {
		return timi;
	}
};

void MiaKlash::methodos2() {// eksoterikh (apo class) dilosi methodou
	cout << "Prwth function ekso apo Klash";
}

int MiaKlash::methodos3(int timi) {
	return timi;
}

int main() {
	MiaKlash klash;
	klash.methodos3(1000);
	klash.methodos4(120);
}