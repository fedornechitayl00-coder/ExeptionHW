#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Animal.h"

class Cage {
protected:
	int number;
	int maxNumbOfAnimals;
	int currentNumbOfAnimals;
	std::vector<Animal*> animalsList;
public:
	Cage();
	Cage(int number, int maxNumbOfAnimals, int currentNumbOfAnimals, std::vector<Animal*> animalsList);
	~Cage() {};

	int getNumber()const;
	void setNumber(int number);

	int getMaxNumbOfAnimals()const;
	void setMaxNumbOfAnimals(int maxNumbOfAnimals);
	
	int getCurrentNumbOfAnimals()const;

	void addAnimalToCage(Animal* animal);
	void deleteAnimalFromCage(int index);
	void findAnimalByName(std::string name);
	void findWildAnimal(bool isWild);
	
	void showDescription()const;
};
