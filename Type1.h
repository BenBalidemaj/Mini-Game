#ifndef TYPE1_H
#define TYPE1_H
#include "Enemy.h"
#include <string>
using namespace std;

class Type1 : public Enemy {

public:

	Type1(string name);

	void move_position(int x, int y) override;

	void fire_weapon() override;

	void update_status() override;


};

#endif // !TYPE1_H
