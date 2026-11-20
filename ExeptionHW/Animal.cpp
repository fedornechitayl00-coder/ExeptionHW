#include "Animal.h"

Animal::Animal()
{
    name = "noname";
    isWild = true;
}

Animal::Animal(std::string name, bool isWild)
{
    this->name = name;
    this->isWild = isWild;
}

std::string Animal::getName() const
{
    return name;
}

void Animal::setName(std::string name)
{
    this->name = name;
}

bool Animal::getIsWild() const
{
    return isWild;
}

void Animal::setIsWild(bool isWild)
{
    this->isWild = isWild;
}

void Animal::showDescription() const
{
    cout << "\nName: " << name;
    if (isWild) {
        cout << "\nis wild";
    }
    else {
        cout << "\nis domestic";
    }
}
