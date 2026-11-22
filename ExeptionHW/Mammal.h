#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

using std::cout;

class Mammal 
	: public Animal
{
protected:
	std::string livingEnvironment;
public:
	Mammal() 
		: Animal() {
		livingEnvironment = "undefined";
	}
	Mammal(std::string name, bool isWild, std::string livingEnvironment) 
	: Animal(name, isWild){
		this->livingEnvironment = livingEnvironment;
	}

	void setLivingEnvironment(std::string livingEnvironment) {
		this->livingEnvironment = livingEnvironment;
	}

	std::string getLivingEnvironment()const {
		return livingEnvironment;
	}

	void showDescription()const override{
		Animal::showDescription();
		cout << "\nLiving Environment: " << livingEnvironment;
	}
};