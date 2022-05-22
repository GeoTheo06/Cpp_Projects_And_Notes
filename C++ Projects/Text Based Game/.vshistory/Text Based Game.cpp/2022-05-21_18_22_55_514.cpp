#include <iostream>
#include <windows.h>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;

const int points = 500;
const int enemyPoints = 250;
const int rounds = 10;
int remainingPoints = points;
string name = "";

class Player { //This class kinda works like storage
	public:
	float health;
	float mana;
	float attack;
	float armor;
	Player(float getHealth, float getMana, float getAttack, float getArmor) {
		health = getHealth;
		mana = getMana;
		armor = getArmor;
		attack = getAttack;
	}
};

int playerAttack(float enemyHealth) { //if I name this just "attack" it will interfere with the variable attack of type float, declared at line 18
	cout << "You have 3 attack choices:" << endl << "1. pepper Spray (P: -5M) (E: -attack * 0.25 = " << geo.attack * 0.25 << ")" << endl << "2. Sword (P: -15M) (E: -attack)" << endl << "3. Punch the earth so hard that you create a huge crack on the surface and the enemy surely from fall damage (P: -125M) (E:DEAD)" << endl;
	Sleep(5000);
	bool wrongInput = true;
	do {
		cout << "What will your next move be?: 1, 2 or 3? ";
		int attackChoice = 0;
		cin >> attackChoice;
		if (attackChoice == 1) {
			geo.mana -= 5;
			enemyHealth -= geo.attack * 0.25;
			wrongInput = false;
		} else if (attackChoice == 2) {
			if (geo.mana < 15) {
				cout << "You cannot execute this attack... Try pepper Spray... XD" << endl;
				wrongInput = true;
				continue;
			}
			geo.mana -= 15;
			enemyHealth -= geo.attack;
			wrongInput = false;
		} else if (attackChoice == 3) {
			if (geo.mana <= 150) {
				cout << "You cannot execute this attack... Try another one" << endl;
				wrongInput = true;
				continue;
			} else {
				geo.mana -= 150;
				enemyHealth = 0;
				wrongInput = false;
			}
		} else {
			cout << "Wrong input... Try again." << endl;
			wrongInput = true;
			continue;
		}
	} while (wrongInput);

	if (enemyHealth > 0) {
		cout << "Enemy is alive and has " << enemyHealth << " health left." << endl;
		return 0;
	} else {
		cout << "Congratulations! You killed the enemy! Prepare for the next level..." << endl;
		return 1;
	}
}

int playerHeal(float playerHealth) {
	geo.mana -= 15;
	return 0;
}

Player geo(0, 0, 0, 0); //initializing class Player

class Enemy {
	public:
	float health;
	float attack;
	Enemy(float getHealth, float getAttack) {
		geo.health = getHealth;
		attack = getAttack;
	}
};

//int heal() {
//
//}

int main() {
	//true random declaration
	srand(time(0));
	ifstream textFile("text.txt");



	bool wrongDifficultyInput = true;

	cout << "Welcome to the Text Based Game!" << endl;
	do {
		cout << "Select difficulty: 1. Easy " << endl << "2. Medium" << endl << "3. Hard" << "4. random" << endl << "5. You choose" << endl;
		int choice = 0;
		cin >> choice;
		if (choice == 5) {

			cout << "You have " << points << " Points to spend on Health, Mana, Armor and Attack.";

			cout << "Choose wisely:" << endl << endl;

			while (geo.health + geo.mana + geo.attack + geo.armor != points) {
				remainingPoints = points;

				cout << "1. Health: ";
				cin >> geo.health;
				if (geo.health > remainingPoints) {
					cout << "You can't use more than " << remainingPoints << " points" << endl << "Try Again...";
					geo.armor = 0;
					geo.attack = 0;
					geo.health = 0;
					geo.mana = 0; //restarting variables so that there is no problem with the while loop
					continue; //Skips any following code and restarts the loop
				} else {
					remainingPoints -= geo.health;
					cout << "You have " << remainingPoints << " points left" << endl << endl;
				}

				cout << "2. Mana: ";
				cin >> geo.mana;
				if (geo.mana > remainingPoints) {
					cout << "You can't use more than " << remainingPoints << " points" << endl << "Try Again...";
					geo.armor = 0;
					geo.attack = 0;
					geo.health = 0;
					geo.mana = 0; //restarting variables so that there is no problem with the while loop
					continue;
				} else {
					remainingPoints -= geo.mana;
					cout << "You have " << remainingPoints << " points left" << endl << endl;
				}

				cout << "3. Attack: ";
				cin >> geo.attack;
				if (geo.attack > remainingPoints) {
					cout << "You can't use more than " << remainingPoints << " points" << endl << "Try Again...";
					geo.armor = 0;
					geo.attack = 0;
					geo.health = 0;
					geo.mana = 0; //restarting variables so that there is no problem with the while loop
					continue;
				} else {
					remainingPoints -= geo.attack;
					cout << "You have " << remainingPoints << " points left" << endl << endl;
				}

				cout << "There are " << remainingPoints << " Points left which will be used for your armor.";
				geo.armor = remainingPoints;
				remainingPoints = 0;
			}
			cout << "Your choices:" << endl << "1. Health: " << geo.health << endl << "2. Mana: " << geo.mana << endl << "3. Attack: " << geo.attack << endl << "4. Armor: " << geo.armor << endl << endl;
			wrongDifficultyInput = false;
		} else {
			cout << "Wrong input. Try again..." << endl;
			wrongDifficultyInput = true;
		}
	} while (wrongDifficultyInput);

	Enemy enemy(0, 0);

	for (int i = 1; i < rounds; i++) { //it runs for every round (Game Loop)
		if (geo.health > 0) {
			if (geo.mana >= 5) { // if mana is 5 or below 5. (It could be 0 but if the mana is 4, 3, 2 or 1 , the game would continue, though the player would not be able to execute moves)

				//Getting a random name from the names list
				int randomNumber = (rand() % 400);
				for (int i = 0; i <= randomNumber; i++) {
					getline(textFile, name); //Acquiring a random name. The loop will run for random times and every time it runs it goes one line down. When it stops, it will select the name in the line it has stopped
				}

				//initialising enemy's variables. (It has to be different every round)
				int enemyPointsMoirasmos = (rand() % (enemyPoints - enemyPoints / 4) + (enemyPoints / 4)); // the lowest it can go is 1/4 of the total points and the highest it can go is 3/4 of the total points
				enemy.health = enemyPointsMoirasmos;
				enemy.attack = enemyPoints - enemyPointsMoirasmos;

				cout << "Starting round " << i << endl;
				if (i == 1) { //checking if this is the first battle
					cout << "The first enemy is " << name << endl;
				} else {
					cout << "The next enemy is " << name << endl;
				}
				Sleep(1000);
				cout << name << " has " << enemy.health << " hp and " << enemy.attack << " attack damage" << endl;
				cout << "Good Luck!" << endl;
				Sleep(2000);
				cout << "What do you do?" << endl << "1. attack" << endl << "2. heal" << endl << "3. Use shield" << endl << endl;
				int moveInput = 0;

				bool wrongMoveInput = true;
				while (wrongMoveInput) {
					cin >> moveInput;
					if (moveInput == 1) {
						int getEnemyState = 0;
						do {
							playerAttack(enemy.health);
							int getEnemyState {playerAttack(enemy.health)};
						} while (geo.mana >= 5 && getEnemyState == 0);
						if (geo.mana <= 5) { //checking here as well because the mana could run out after a move from which the enemy will survive so he will continue playing as the first check for the mana will not execute
							cout << "You are out of Mana! I am afraid that you cannot continue to the next level and have to retreat as you can't execute another move." << endl;
							Sleep(1000);
							cout << "Thanks for Playing!" << endl;
							Sleep(1000);
							cout << "Bye!";
							return 0;
						}
						//to oti eftase ws edw shmainei oti nikhse opote afkshse ta stats
						wrongMoveInput = false;

					} else if (moveInput == 2) {
						playerHeal(geo.health);
						wrongMoveInput = false;
					} else {
						cout << "Wrong input. Try again..." << endl;
						wrongMoveInput = true;
						continue;
					}
				}

			} else {
				cout << "You are out of Mana! I am afraid that you cannot continue to the next level and have to retreat as you can't execute another move." << endl;
				Sleep(1000);
				cout << "Thanks for Playing!" << endl;
				Sleep(1000);
				cout << "Bye!";
				return 0;
			}
		} else { //if player has 0 or below 0 health
			cout << "You died from " << name << endl;
			Sleep(1000);
			cout << ":( Too bad." << endl;
			Sleep(1000);
			cout << "Anyway.Your journey ends here...";
			Sleep(1000);
			cout << "Bye!";
			return 0;
		}
	}

}