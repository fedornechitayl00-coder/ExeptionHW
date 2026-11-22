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
	virtual ~Animal() {};

	std::string getName()const;
	void setName(std::string name);

	bool getIsWild()const;
	void setIsWild(bool isWild);

	virtual void showDescription() const;
};