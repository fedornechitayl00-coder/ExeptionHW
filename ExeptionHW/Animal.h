#pragma once
#include <iostream>
#include <string>

using std::cout;

class Animal {
protected:
	std::string name;
	bool isWild;
public:
	Animal();
	Animal(std::string name, bool isWild);
	~Animal() {};

	std::string getName()const;
	void setName(std::string name);

	bool getIsWild()const;
	void setIsWild(bool isWild);

	void showDescription() const;
};