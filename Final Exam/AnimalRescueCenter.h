#pragma once

#include "Animal.h"
#include"AnimalCreater.h"
#include "Bird.h"
#include "Fish.h"

class AnimalRescueCenter
{
private:

	static const int MAX_ANIMALS = 50;
	Animal* animals[MAX_ANIMALS];

	int numberOfAnimals;
	int searchAvailableAnimal(int id);
public:
	AnimalRescueCenter(); // This is the only constructor required. 
	void addAnimal();
	void giveAnimalForAdoption();
	void displayAllAvailableAnimals();
	void makeTheAdoptedAnimalsMove();
	Animal* createAnimal(int type);

};