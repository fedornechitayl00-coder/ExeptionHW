#pragma once
#include <iostream>
#include <string>

using std::cout;

class Bird 
	:public Animal
{
protected:
	float flyingSpeed;
public:
	Bird() : Animal() {
		flyingSpeed = 0.0f;
	}
	Bird(std::string name, bool isWild, float flyingSpeed) : Animal(name, isWild){
		this->flyingSpeed = flyingSpeed;
	}

	void setFlyingSpeed(float flyingSpeed) {
		this->flyingSpeed = flyingSpeed;
	}
	float getFlyingSpeed()const {
		return flyingSpeed;
	}

	void showDescription()const override{
		Animal::showDescription();
		cout << "\nFlying speed: " << flyingSpeed;
	}
};