#pragma once
#include <iostream>
#include <string>

using std::cout;

class Fish {
protected:	
	bool deepWater;
public:
	Fish(){
		deepWater = false;
	}
	Fish(bool deepWater) {
		this->deepWater = deepWater;
	}

	void setDeepWater(bool deepWater) {
		this->deepWater = deepWater;
	}
	bool getDeepWater()const {
		return deepWater;
	}

	void showDescription()const {
		cout << std::endl;
		if (!deepWater) cout << "Not ";
		cout << "living in deep water.";
	}
};