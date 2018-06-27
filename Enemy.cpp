#include <iostream>
#include "Enemy.h"
#include <string>
using namespace std;


Enemy::Enemy(string n) : name(n) {

}


int Enemy::getHeight() const {
	return height;
}

void Enemy::setHeight(int height) {
	this->height = height;
}

int Enemy::getStatus() const {
	return status;
}

string Enemy::getName() const {
	return name;
}

void Enemy::setStatus(int status) {
	this->status = status;
}

int Enemy::getWidth() const {
	return width;
}

void Enemy::setWidth(int width) {
	this->width = width;
}

int Enemy::getPositionX() const {
	return x_position;
}

void Enemy::setPositionX(int position) {
	x_position = position;
}

int Enemy::getPositionY() const {
	return y_position;
}

void Enemy::setPositionY(int position) {
	y_position = position;
}

int Enemy::getSpeed() const {
	return speed;
}

void Enemy::setSpeed(int speed) {
	this->speed = speed;
}

bool Enemy::isDead() {
	return status < 0;
}
