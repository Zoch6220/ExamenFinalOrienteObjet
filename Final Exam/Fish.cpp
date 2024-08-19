
#include "Fish.h"




Fish::Fish()
{
	animal = new Animal();
}

void Fish::buildId(int id)
{
	
	animal->setId(id);
}

void Fish::buildType()
{
	animal->setType(1);
}

void Fish::buildName(string name)
{
	animal->setName(name);
}
Animal* Fish::getAnimal()
{
	return animal;
}
void Fish::buildWingspan(double wingspan)
{
}
void Fish::buildMove()
{
	
	animal->setMove(animal->getName() + " is swimming in the sanctuary!");
}
void const Fish::display()
{
	string adop, type="FISH";
	if (this->getAnimal()->getAdopted() == false)
		adop = "NOT ADOPTED";
	else
		adop = "ADOPTED";


	cout << "|" << left << setw(10) << this->getAnimal()->getId()<< "|" << right << setw(10) << this->getAnimal()->getName() << "|" << setw(10) << type << "|" << setw(10) << "/-----/" << "|" << setw(10) << adop << endl;
}




