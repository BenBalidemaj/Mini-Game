#ifndef ENEMY_H
#define ENEMY_H
using namespace std;

class Enemy {
private:
	int x_position;
	int y_position;
	int speed;
	int width;
	int height;
	int status;
	string name;

public:
	Enemy(string name);

	virtual void move_position(int x, int y) = 0;

	virtual void fire_weapon() = 0;

	virtual void update_status() = 0;

	int getHeight() const;

	void setHeight(int height);

	int getStatus() const;

	string getName() const;

	void setStatus(int status);

	int getWidth() const;

	void setWidth(int width);

	int getPositionX() const;

	void setPositionX(int position);

	int getPositionY() const;

	void setPositionY(int position);

	int getSpeed() const;

	void setSpeed(int speed);

	bool isDead();
}; 

#endif // !ENEMY_H
