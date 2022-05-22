#include <iostream>
#include <windows.h>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;

const int points = 500;
int enemyPoints = 250;
const int rounds = 10;
int remainingPoints = points;

float maxShield = 0;
float maxHealth = 0;
float maxMana = 0;
float maxDamage = 0;

bool playerWin = false;
bool usingShield = false;
string name = "";

class Player { //This class kinda works like storage
	public:
	float health;
	float mana;
	float attack;
	float shield;
	Player(float getHealth, float getMana, float getAttack, float getShield) {
		health = getHealth;
		mana = getMana;
		shield = getShield;
		attack = getAttack;
	}
};

class Enemy {
	public:
	float health;
	float attack;
	Enemy(float getHealth, float getAttack) {
		health = getHealth;
		attack = getAttack;
	}
};

Player geo(0, 0, 0, 0); //initializing class Player
Enemy enemy(0, 0);

void isEnemyDead() {
	if (enemy.health > 0) {
		cout << endl << endl << name << " is alive and has " << enemy.health << " HP left." << endl << endl;
		Sleep(3000);
		enemyAttack();
		playerWin = false;
	} else {
		cout << endl << endl << "Congratulations! You killed " << name << "!" << endl;
		Sleep(3000);
		cout << "Your Shield is being healed to maximum:" << endl;
		for (int i = 5; i <= 100; i += 5) {
			cout << i << "%" << endl;
			Sleep(i * 5);
		}
		Sleep(2000);
		geo.shield = maxShield;
		cout << "Done!" << endl << endl;
		Sleep(2000);

		cout << "Your Attack Damage is being increased by 10%" << endl;
		for (int i = 5; i <= 100; i += 5) {
			cout << i << "%" << endl;
			Sleep(i * 5);
		}
		Sleep(2000);
		geo.attack = geo.attack + (maxDamage * 0.1);
		cout << "Done!" << endl << endl;
		Sleep(2000);

		cout << "Your Health Points are being increased by 10%" << endl;
		for (int i = 5; i <= 100; i += 5) {
			cout << i << "%" << endl;
			Sleep(i * 5);
		}
		Sleep(2000);
		geo.health = geo.health + (maxHealth * 0.1);
		if (geo.health > maxHealth) {
			geo.health = maxHealth;
		}
		cout << "Done!" << endl << endl;
		Sleep(2000);

		cout << "Your Mana is being increased by 10%" << endl;
		for (int i = 5; i <= 100; i += 5) {
			cout << i << "%" << endl;
			Sleep(i * 5);
		}
		Sleep(2000);
		geo.mana = geo.mana + (maxMana * 0.1);
		if (geo.mana > maxMana) {
			geo.mana = maxMana;
		}
		cout << "Done!" << endl << endl;
		Sleep(2000);

		cout << "Your Stats now are: " << endl;
		Sleep(500);
		cout << "attack: " << geo.attack << " Dmg" << endl;
		Sleep(500);
		cout << "Health: " << geo.health << " HP" << endl;
		Sleep(500);
		cout << "Shield: " << geo.shield << endl;
		Sleep(500);
		cout << "Mana: " << geo.mana << endl << endl;
		Sleep(1000);

		cout << "Press any key to start the next Battle..." << endl << endl;
		system("timeout 0 > nul");

		playerWin = true;
	}
}

void playerAttack() { //if I name this just "attack" it will interfere with the variable attack of type float, declared at line 18
	cout << "You have 3 attack choices:" << endl;
	Sleep(500);
	cout << "1. pepper Spray (P: -5M) (E: -attack * 20% = -" << geo.attack * 0.20 << ")" << endl;
	Sleep(500);
	cout << "2. Sword (P: -15M) (E: -" << geo.attack << ")" << endl;
	Sleep(500);
	cout << "3. Punch the earth so hard that you create a huge crack on the surface and " << name << " dies from fall damage(P: -125M) (E:DEAD)" << endl << endl;
	bool wrongInput = true;
	do {
		cout << "Remember that you have " << geo.mana << " Mana. What will your next move be? 1, 2 or 3? ";
		int attackChoice = 0;
		cin >> attackChoice;
		if (attackChoice == 1) {
			geo.mana -= 5;
			enemy.health = enemy.health - (geo.attack * 0.20);
			wrongInput = false;
		} else if (attackChoice == 2) {
			if (geo.mana < 15) {
				cout << "You cannot execute this attack... Try pepper Spray... XD" << endl;
				wrongInput = true;
				continue;
			}
			geo.mana -= 15;
			enemy.health -= geo.attack;
			wrongInput = false;
		} else if (attackChoice == 3) {
			if (geo.mana <= 150) {
				cout << "You cannot execute this attack... Try another one" << endl;
				wrongInput = true;
				continue;
			} else {
				geo.mana -= 150;
				enemy.health = 0;
				wrongInput = false;
			}
		} else {
			cout << "Wrong input... Try again." << endl;
			wrongInput = true;
			continue;
		}
	} while (wrongInput);

	isEnemyDead();
}

void playerHeal() {
	geo.health = geo.health + (maxHealth * 0.20);
	if (geo.health > maxHealth) {
		geo.health = maxHealth;
	}
	geo.mana = geo.mana + (maxMana * 0.20);
	if (geo.mana > maxMana) {
		geo.mana = maxMana;
	}
}

void useShield() {
	geo.mana = geo.mana - 10;
	usingShield = true;
	cout << "You are now using a shield which will protect you from " << name << "'s attack";
}

void enemyAttack() {
	srand(time(0));

	int playerShieldLeft = 0;
	if (usingShield) {

		playerShieldLeft = geo.shield - enemy.attack;
		if (playerShieldLeft >= 0) {
			cout << name << " dealt " << enemy.attack << " damage on the shield and didn't affect your health" << endl;
			Sleep(1000);
			cout << "Your shield has " << playerShieldLeft << " HP left." << endl << endl;
		} else { //if playerShieldLeft is negative
			cout << "Unfortunately, your shield couldn't protect you, though it absorbed " << geo.shield << " HP." << endl;
			Sleep(2000);
			cout << "You have " << geo.health - playerShieldLeft * -1 << " HP left"; // it is multiplied by -1 so it becomes positive
			geo.health = geo.health - playerShieldLeft;
		}

		int deflectEnemyDamage = rand() % 1;
		if (deflectEnemyDamage == 1) {
			cout << "You are lucky and your shield deflected " << name << "'s attack and you dealt " << enemy.attack * 0.1 << " damage" << endl;
			enemy.health = enemy.health - (enemy.attack * 0.1);
		}

		usingShield = false;
	} else { //if player is not using shield
		geo.health = geo.health - enemy.attack;
	}
}

int main() {
	//true random declaration
	srand(time(0));
	ifstream textFile("text.txt");

	bool wrongDifficultyInput = true;

	cout << "Welcome to the Text Based Game!" << endl;
	do {
		cout << "Select difficulty:" << endl << "1. Easy" << endl;
		Sleep(500);
		cout << "2. Medium" << endl;
		Sleep(500);
		cout << "3. Hard" << endl;
		Sleep(500);
		cout << "4. random" << endl;
		Sleep(500);
		cout << "5. You choose" << endl;
		int choice = 0;
		cin >> choice;
		if (choice == 5) {

			cout << "You have " << points << " Points to spend on Health, Mana, Shield and Attack.";
			Sleep(2000);
			cout << "Choose wisely : " << endl << endl;

			while (geo.health + geo.mana + geo.attack + geo.shield != points) {
				remainingPoints = points;

				cout << "1. Health: ";
				cin >> geo.health;
				if (geo.health > remainingPoints) {
					cout << "You can't use more than " << remainingPoints << " points" << endl << "Try Again...";
					geo.shield = 0;
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
					geo.shield = 0;
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
					geo.shield = 0;
					geo.attack = 0;
					geo.health = 0;
					geo.mana = 0; //restarting variables so that there is no problem with the while loop
					continue;
				} else {
					remainingPoints -= geo.attack;
					cout << "You have " << remainingPoints << " points left" << endl << endl;
				}

				cout << "There are " << remainingPoints << " Points left which will be used for your shield." << endl << endl;
				geo.shield = remainingPoints;
				remainingPoints = 0;
			}
			cout << "Your choices:" << endl << "1. Health: " << geo.health << endl << "2. Mana: " << geo.mana << endl << "3. Attack: " << geo.attack << endl << "4. shield: " << geo.shield << endl << endl;
			wrongDifficultyInput = false;
		} else {
			cout << "Wrong input. Try again..." << endl;
			wrongDifficultyInput = true;
		}
	} while (wrongDifficultyInput);

	maxShield = geo.shield;
	maxHealth = geo.health;
	maxDamage = geo.attack;
	maxMana = geo.mana;

	for (int i = 1; i < rounds; i++) { //it runs for every round (Game Loop)
		if (geo.health > 0) {
			if (geo.mana >= 5) { // It could be 0 but if the mana is 4, 3, 2 or 1 , the game would continue, though the player would not be able to execute moves as the minimum mana for pepper spray is 5

				//Getting a random name from the names list
				ifstream textFile("text.txt");
				int randomNumber = (rand() % 400);
				for (int i = 0; i <= randomNumber; i++) {
					getline(textFile, name); //Acquiring a random name. The loop will run for random times and every time it runs it goes one line down. When it stops, it will select the name in the line it has stopped
				}
				textFile.close();

				//initialising enemy's variables. (It has to be different every round)
				int enemyPointsMoirasmos = (rand() % (enemyPoints - enemyPoints / 4) + (enemyPoints / 4)); // the lowest it can go is 1/4 of the total points and the highest it can go is 3/4 of the total points
				enemy.health = enemyPointsMoirasmos;
				enemy.attack = enemyPoints - enemyPointsMoirasmos;
				enemyPoints += 50; //every time a game loop starts, the total points that an enenmy will have for his abilities will be +50 so that it's harder each round

				cout << "Starting round " << i << endl;
				if (i == 1) { //checking if this is the first battle
					cout << "The first enemy is " << name << endl;
					Sleep(5000);
				} else {
					cout << "The next enemy is " << name << endl;
					Sleep(5000);
				}
				cout << name << " has " << enemy.health << " hp and " << enemy.attack << " attack damage" << endl;
				cout << "Good Luck!" << endl;
				Sleep(2000);

				int moveInput = 0;

				playerWin = false;
				while (!playerWin) {
					cout << "What do you do?" << endl;
					Sleep(500);
					cout << "1. attack" << endl;
					Sleep(500);
					cout << "2. heal" << endl;
					Sleep(500);
					cout << "3. Use shield" << endl << endl; //kane ton exthro na xtypaei afou epizhsei apo attack tou paikth CONTINUE FROM HERE

					bool wrongMoveInput = true;
					while (wrongMoveInput) {
						cin >> moveInput;
						if (moveInput == 1) {

							playerAttack();

							if (geo.mana < 5) { //checking here as well because the mana could run out after a move (and not after a round which is checked by the first "if mana") from which the enemy will survive so he will continue playing.
								cout << "You are out of Mana! I am afraid that you cannot execute any other move and have to retreat. :(" << endl;
								Sleep(1000);
								cout << "Thanks for Playing!" << endl;
								Sleep(1000);
								cout << "Bye!";
								return 0;
							}
							wrongMoveInput = false;

						} else if (moveInput == 2) {
							playerHeal();
							wrongMoveInput = false;
						} else if (moveInput == 3) {
							useShield();
							wrongMoveInput = false;
						} else {
							cout << "Wrong input. Try again..." << endl;
							wrongMoveInput = true;
							continue;
						}
					}
				}

			} else { //if mana is below 5
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