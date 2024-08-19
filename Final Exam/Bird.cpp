#include "Bird.h"

Bird::Bird() {
	animal = new Animal();
}

void Bird::buildId(int id) {
	animal->setId(id);
}
void Bird::buildType() {
	animal->setType(2);
}
void Bird::buildName(string name) {
	animal->setName(name);
}
void Bird::buildWingspan(double wingspan) {
	animal->setWingspan(wingspan);
}
Animal* Bird::getAnimal() {
	return animal;
}
void Bird::buildMove() {

	animal->setMove(animal->getName()+" is flying in the sanctuary!");
}
void const Bird::display()
{
	string adop, type="BIRD";
	if (this->getAnimal()->getAdopted() == false)
		adop = "NOT ADOPTED";
	else
		adop = "ADOPTED";

	cout << "|" << left << setw(10) << this->getAnimal()->getId() << "|" << right << setw(10) << this->getAnimal()->getName() << "|" << setw(10) << type << "|" << setw(10) <<this-> getAnimal()->getWingspan() << "|" << setw(10) << adop << endl;
}