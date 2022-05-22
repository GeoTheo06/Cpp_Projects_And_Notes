#include <iostream>
using namespace std;
const int points = 500;
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

class Enemy {
	public:
	float health;
	float armor;
	float attack;
	Enemy(float getHealth, float getArmor, float getAttack) {
		health = getHealth;
		armor = getArmor;
		attack = getAttack;
	}
};

int attack() {

}

int spell() {

}

int heal() {

}

int main() {
	float health = 0;
	float mana = 0;
	float armor = 0;
	float attack = 0;

	cout << "Welcome to the Text Based Game!" << endl << "You have " << points << " Points to spend on health, Mana, armor and attack." << endl << "Choose wisely:";
	while (health + mana + attack + armor != points) {
		remainingPoints = points;
		health = 0;
		mana = 0;
		attack = 0;
		armor = 0;

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

		cout << "3. Attack: ";
		cin >> attack;
		if (attack > remainingPoints) {
			cout << "You can't use more than " << remainingPoints << " points" << endl << "Try Again...";
			return 0;
		} else {
			remainingPoints -= attack;
			cout << "You have " << remainingPoints << " points left" << endl;
		}

		cout << "There are " << remainingPoints << " Points left which will be used for your armor.";
		armor = remainingPoints;
		remainingPoints = 0;
	}
	cout << "Your choices:" << endl << "1. Health: " << health << endl << "2. Mana: " << mana << endl << "3. Attack: " << attack << endl << "4. Armor" << armor << endl << endl;


}