#include <iostream>
#include "Enemy.h"
#include "Type3.h"
#include <string>
using namespace std;

Type3::Type3(string name, int ammo) : Enemy(name) {
	setStatus(rand() % 2 + 7);
	setSpeed(6);
	setPositionY(500);
	this->ammo = ammo;
}

void Type3::move_position(int x, int y) {

	if (!isDead()) {
		setPositionX(x);
		setPositionY(y);
		cout << getName() + " moves to position " << x << ", " << y << " ";
	}

	else {
		cout << getName() + " is too dead to move ";
	}

}

void Type3::fire_weapon() {
	string weapon;
	weapon = rand() % 2 == 1 ? "bomb" : "missle";

	cout << getName() + " fired weapon: ";

	if (!isDead()) {

		if (ammo < 0) {
			cout << "Out of ammo ";
		}

		else {
			cout << weapon + " (" << ammo << ") left";
		}
	}

	else {
		cout << "Too dead to fire";
	}

}

void Type3::update_status() {

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

