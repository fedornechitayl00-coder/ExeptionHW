#include "Animal.h"
#include "Bird.h"
#include "Cage.h"
#include "ZooException.h"

using std::cin;

int main() {
	Animal* bear = new Animal("bear", true);
	Animal* emu = new Animal("emu", true);
	Animal* wolf = new Animal("wolf", true);

	Cage cage(88, 7, 3, { bear, emu, wolf });

	//Animal* bunny = new Animal("bunny", false);

	//cage.showDescription();
	//cage.addAnimalToCage(bunny);
	//cage.deleteAnimalFromCage(2);
	//cage.findAnimalByName("emu");
	//cage.findWildAnimal(true);
	//cage.showDescription();

	int menu = 0;
	std::string nameAnimal;
	bool boolWildAnimal = false;
	int indexOfAnimal = 0;

	Animal* userInputAnimal = nullptr;

	do {
		cout << "\n________________________\n" <<
			"1. show list of all animals\n" <<
			"2. add animal to cage\n" <<
			"3. delete animal\n" <<
			"4. find wild/domestic animals\n" <<
			"5. find animal by name\n" <<
			"0. exit\n";
		cin >> menu;
		switch (menu) {
		case 1:
			cage.showDescription();
			break;
		case 2:
			cout << " Input name: ";
			cin.ignore();
			getline(cin, nameAnimal);
			cout << "Enter 1 or 0(wild or domestic): ";
			cin >> boolWildAnimal;
			try {
				userInputAnimal = new Animal(nameAnimal, boolWildAnimal);
				cage.addAnimalToCage(userInputAnimal);
			}
			catch (ZooException& error) {
				cout << error.showMessage() << std::endl;
				delete userInputAnimal;
			};
			break;
		case 3:
			cout << " Input index: ";
			cin.ignore();
			cin >> indexOfAnimal;
			cage.deleteAnimalFromCage(indexOfAnimal);
			break;
		case 4:
			cout << "Enter 1 or 0(wild or domestic): ";
			cin >> boolWildAnimal;
			cage.findWildAnimal(boolWildAnimal);
			break;
		case 5:
			cout << " Input name: ";
			cin.ignore();
			getline(cin, nameAnimal);
			cage.findAnimalByName(nameAnimal);
		}

	} while (menu != 0);

	return 0;
}