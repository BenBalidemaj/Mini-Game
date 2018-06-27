#ifndef TYPE3_H
#define TYPE3_H
#include "Enemy.h"
#include <string>
using namespace std;

class Type3 : public Enemy {

private:
	int ammo;

public:
	Type3(string name, int ammo);

	void move_position(int x, int y) override;

	void fire_weapon() override;

	void update_status() override;

};

#endif // !TYPE3_H
