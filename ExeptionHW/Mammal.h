#pragma once
#include <iostream>
#include <string>

using std::cout;

class Mammal {
protected:
	std::string livingEnviroment;
public:
	Mammal() {
		livingEnviroment = "undefined";
	}
	Mammal(std::string livingEnviroment) {
		this->livingEnviroment = livingEnviroment;
	}

	void setLivingEnviroment(std::string livingEnviroment) {
		this->livingEnviroment = livingEnviroment;
	}

	std::string getLivingEnviroment()const {
		return livingEnviroment;
	}

	void showDescription()const {
		cout << "\nLiving enviroment: " << livingEnviroment;
	}
};