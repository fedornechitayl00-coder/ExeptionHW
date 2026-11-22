#include "Animal.h"
#include "ZooException.h"

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
    if (name.empty()) {
        throw NameException("Name can't be empty", name);
    }
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
