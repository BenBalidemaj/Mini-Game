#include <iostream>
#include <string>
#include "Enemy.h"
#include "Type1.h"
#include "Type2.h"
#include "Type3.h"


using namespace std;


int main()
{
	const int max_enemy = 20;
	Enemy* enemy_ptr[max_enemy];
	int num_enemy;

	Enemy *pitbull = new Type1("PitBull");
	enemy_ptr[0] = pitbull;
	Enemy *lion = new Type1("Lion");
	enemy_ptr[1] = lion;
	Enemy *tiger = new Type1("Tiger");
	enemy_ptr[2] = tiger;

	Enemy *jet = new Type2("Jet", 5, true);
	enemy_ptr[3] = jet;
	Enemy *helicopter = new Type2("Helicopter", 5, true);
	enemy_ptr[4] = helicopter;
	Enemy *drone = new Type2("Drone", 10, false);
	enemy_ptr[5] = drone;

	Enemy *soldier = new Type3("Soldier", 4);
	enemy_ptr[6] = soldier;
	Enemy *robot = new Type3("Robot", 9);
	enemy_ptr[7] = robot;
	Enemy *badcop = new Type3("Badcop", 4);
	enemy_ptr[8] = badcop;

	num_enemy = 9;


	while (true) {

		for (int i = 0; i < num_enemy; i++) {
			enemy_ptr[i]->move_position(rand() % 600, rand() % 800);
		}
		cout << "\n\n";
		enemy_ptr[rand() % num_enemy]->fire_weapon();
		cout << "\n\n";

		enemy_ptr[rand() % num_enemy]->update_status();

	}


	return 0;
}
