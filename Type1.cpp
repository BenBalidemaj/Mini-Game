#include <iostream>
#include "Enemy.h"
#include "Type1.h"
#include <string>
using namespace std;


Type1::Type1(string name) : Enemy(name) {

	setStatus(rand() % 2 + 1);
	setSpeed(6);
	setPositionY(500);
}

void Type1::move_position(int x, int y) {

	if (!isDead()) {
		setPositionX(x);
		setPositionY(y);
		cout << getName() + " moves to position " << x << ", " << y << " ";
	}

	else {
		cout << getName() + " is too dead to move ";
	}

}

void Type1::fire_weapon() {

	cout << getName() + " fired weapon: ";

	if (!isDead()) {

		int howManyAttacks = 3;
		int attackType = rand() % howManyAttacks;
		string attack;

		switch (attackType) {

		case 0:
			attack = "Bark ";
			break;

		case 1:
			attack = "Bite ";
			break;

		case 2:
			attack = "Slash ";
			break;

		}

		cout << attack;

	}

	else {
		cout << "NO WEAPON FIRED ";
	}

}

void Type1::update_status() {

	cout << getName() + " update status: ";

	if (!isDead()) {
		cout << "Ouch";
		setStatus(getStatus() - 1);
		cout << ", status points: " << getStatus() << " \n";
	}

	else {
		cout << "I'll be back...";
	}

}
