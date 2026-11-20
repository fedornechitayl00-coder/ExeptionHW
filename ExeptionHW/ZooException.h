#pragma once
#include <iostream>
#include <string>

using std::cout;

class ZooException {
protected:
	std::string textWarning;
public:
	ZooException(std::string textWarning) {
		this->textWarning = textWarning;
	}

	virtual ~ZooException() = default;

	virtual std::string showMessage()const = 0;
};

class PredatorException
	:ZooException {
protected:
	bool isWild;
public:
	PredatorException(std::string textWarning, bool isWild) 
	:ZooException(textWarning){
		this->isWild = isWild;
	}

	std::string showMessage()const override {
		return "Predator exception: " + textWarning + "!";

	}
};

class MaxCapacityException
	:public ZooException {
protected:
	int maxNumbOfAnimals;
public:
	MaxCapacityException(std::string textWarning, int maxNumbOfAnimals) 
	:ZooException(textWarning){
		this->maxNumbOfAnimals = maxNumbOfAnimals;
	}

	std::string showMessage()const override {
		return "Max capacity exception: " + textWarning + "! max capacity: " + std::to_string(maxNumbOfAnimals);
	}
};


class NameException
	:public ZooException{
protected:
	std::string name;
public:
	NameException(std::string textWarning, std::string name)
		:ZooException(textWarning) {
		if (name.size() > 0) {
			this->name = name;
		}
	}

	std::string showMessage()const override {
		return "Name exception: " + textWarning + "! name : " + name;
	}
};