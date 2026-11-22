#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

using std::cout;

class Fish 
: public Animal{
protected:	
	bool deepWater;
public:
	Fish() : Animal(){
		deepWater = false;
	}
	Fish(std::string name, bool isWild, bool deepWater) 
	: Animal(name, isWild){
		this->deepWater = deepWater;
	}

	void setDeepWater(bool deepWater) {
		this->deepWater = deepWater;
	}
	bool getDeepWater()const {
		return deepWater;
	}

	void showDescription()const override{
		Animal::showDescription();
		cout << std::endl;
		if (!deepWater) cout << "Not ";
		cout << "living in deep water.";
	}
};