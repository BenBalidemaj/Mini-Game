#include <iostream>
#include "Enemy.h"
#include "Type2.h"
#include <string>
using namespace std;

Type2::Type2(string name, int ammo, bool highFlyer) : Enemy(name) {
	this->ammo = ammo;
	setStatus(rand() % 2 + 4);
	setSpeed(rand() % 15 + 15);
	setPositionY(highFlyer ? 100 : 300);
}

void Type2::move_position(int x, int y) {

	if (!isDead()) {
		setPositionX(x);
		setPositionY(y);
		cout << getName() + " moves to position " << x << ", " << y << " ";
	}

	else {
		cout << getName() + " is too dead to move ";
	}

}

void Type2::fire_weapon() {

	cout << getName() + " fired weapon: ";

	if (!isDead()) {

		if (ammo < 0) {
			cout << "Out of ammo ";
		}

		else {
			cout << "Gun (" << ammo << ") left";
		}
	}

	else {
		cout << "NO WEAPON FIRED ";
	}

}

void Type2::update_status() {

	if (!isDead()) {
		cout << "Ouch ";
		setStatus(getStatus() - 1);
	}

	else {
		cout << "AARRGGHH ";
	}

}

