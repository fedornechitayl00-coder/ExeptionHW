#pragma once
#include <iostream>
#include <string>

using std::cout;

class Bird {
protected:
	float flyingSpeed;
public:
	Bird() {
		flyingSpeed = 0.0f;
	}
	Bird(float flyingSpeed) {
		this->flyingSpeed = flyingSpeed;
	}

	void setFlyingSpeed(float flyingSpeed) {
		this->flyingSpeed = flyingSpeed;
	}
	float getFlyingSpeed()const {
		return flyingSpeed;
	}

	void showDescription()const {
		cout << "\nFlying speed: " << flyingSpeed;
	}
};