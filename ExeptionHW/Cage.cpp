#include "Cage.h"
#include "ZooException.h"


Cage::Cage()
{
    number = 0;
    maxNumbOfAnimals = 0;
    currentNumbOfAnimals = 0;
}

Cage::Cage(int number, int maxNumbOfAnimals, int currentNumbOfAnimals, std::vector<Animal*> animalsList)
{
    this->number = number;
    this->maxNumbOfAnimals = maxNumbOfAnimals;
    this->currentNumbOfAnimals = currentNumbOfAnimals;
    this->animalsList = animalsList;
}

int Cage::getNumber() const
{
    return number;
}

void Cage::setNumber(int number)
{
    this->number = number;
}

int Cage::getMaxNumbOfAnimals() const
{
    return maxNumbOfAnimals;
}

void Cage::setMaxNumbOfAnimals(int maxNumbOfAnimals)
{
    this->maxNumbOfAnimals = maxNumbOfAnimals;
}

int Cage::getCurrentNumbOfAnimals() const
{
    return currentNumbOfAnimals;
}

void Cage::addAnimalToCage(Animal* animal)
{
    if (animalsList.size() >= maxNumbOfAnimals) {
        throw MaxCapacityException("Cage is full", maxNumbOfAnimals);
    }

    if (!animalsList.empty() && animalsList[0]->getIsWild() != animal->getIsWild()) {
        throw PredatorException("You can't add wild animal to domestic", animal->getIsWild());
    }
    animalsList.push_back(animal);
    currentNumbOfAnimals++;
}

void Cage::deleteAnimalFromCage(int index)
{
    if (index >= 0 && static_cast<size_t>(index) < animalsList.size()) {   //static_cast<size_t>(index)  -- робить індекс беззнаковим щоб можна було порівняти з розміром масиву
        delete animalsList[index];
        animalsList.erase(animalsList.begin() + index);
    }
    currentNumbOfAnimals--;
}

void Cage::findAnimalByName(std::string name)
{
    int count = 0;
    std::cout << "\n___________________\n";
    for (int i = 0; i < animalsList.size(); ++i) {
        if (animalsList[i] != nullptr && animalsList[i]->getName() == name) {
            animalsList[i]->showDescription();
            count++;
        }
    }
    if (!(count > 0)) {
        std::cout << "\nNo one found.\n";
    }
        std::cout << "\n___________________\n";
}

void Cage::findWildAnimal(bool isWild)
{
    std::cout << "\n___________________\n";
    if (isWild) {
        cout << "\nWild animals:";
    }
    else {
        cout << "\nDomestic animals:";
    }
    int count = 0;
    for (int i = 0; i < animalsList.size(); ++i) {
        if (animalsList[i]->getIsWild() == isWild) {
            animalsList[i]->showDescription();
            count++;
        }
    }
    if (count == 0) {
        std::cout << "\nNo one found.\n";
    }       
    std::cout << "\n___________________\n";
}

void Cage::showDescription() const
{
    std::cout << "\n___________________\n";
    cout <<  "\nNumber: " << number <<
    "\nMax number of animals in cage: " << maxNumbOfAnimals << 
    "\nCurrent number of animal: " << currentNumbOfAnimals;

    cout << "\nCurrent animals in cage:";

    for (int i = 0; i < animalsList.size(); i++) {
        animalsList[i]->showDescription();
    }
    std::cout << "\n___________________\n";
}
