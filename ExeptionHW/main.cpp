#include "Animal.h"
#include "Bird.h"
#include "Cage.h"

int main() {
	Animal* bear = new Animal("bear", true);
	Animal* emu = new Animal("emu", true);
	Animal* wolf = new Animal("wolf", true);

	Cage cage(88, 7, 3, { bear, emu, wolf });

	Animal* bunny = new Animal("bunny", false);

	cage.showDescription();
	cage.addAnimalToCage(bunny);
	cage.deleteAnimalFromCage(2);
	cage.findAnimalByName("emu");
	cage.findWildAnimal(true);
	cage.showDescription();

	return 0;
}