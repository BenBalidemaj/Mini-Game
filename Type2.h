#ifndef TYPE2_H
#define TYPE2_H
#include "Enemy.h"
#include <string>
using namespace std;

class Type2 : public Enemy {

private:
	int ammo;

public:
	Type2(string name, int ammo, bool highFlyer);

	void move_position(int x, int y) override;
	void fire_weapon() override;

	void update_status() override;


};
#endif // !TYPE2_H
