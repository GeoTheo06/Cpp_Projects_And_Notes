#include <iostream>
using namespace std;
const int points = 300;
int remainingPoints = points;
class Player {
	public:
	float health;
	float mana;
	float armor;
	float attack;
	Player(float getHealth, float getMana, float getArmor, float getAttack) {
		health = getHealth;
		mana = getMana;
		armor = getArmor;
		attack = getAttack;
	}
};

int epithesh() {

}

int ksorki() {

}

int heal() {

}

int main() {
	float health;
	float mana;
	float armor;
	float attack;

	cout << "Welcome to the Text Based Game!" << endl << "You have " << points << " Points to spend on health, Mana, armor and attack." << endl << "Choose wisely:";
	cout << "1. Health: ";
	cin >> health;
	if (health > remainingPoints) {
		cout << "You can't use more than " << remainingPoints << " points" << endl << "Try Again...";
		return 0;
	} else {
		remainingPoints -= health;
		cout << "You have " << remainingPoints << " points left" << endl;
	}

	cout << "2. Mana: ";
	cin >> mana;
	if (mana > remainingPoints) {
		cout << "You can't use more than " << remainingPoints << " points" << endl << "Try Again...";
		return 0;
	} else {
		remainingPoints -= mana;
		cout << "You have " << remainingPoints << " points left" << endl;
	}

	cout << "3. Armor: ";
	cin >> armor;
	if (armor > remainingPoints) {
		cout << "You can't use more than " << remainingPoints << " points" << endl << "Try Again...";
		return 0;
	} else {
		remainingPoints -= armor;
		cout << "You have " << remainingPoints << " points left" << endl;
	}

	cout << "There are " << remainingPoints << " Points left whichwill be used for your armor.";

}