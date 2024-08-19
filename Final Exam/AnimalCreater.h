#pragma once

#include "AnimalBuilder.h"
class AnimalCreater
{
private:
	AnimalBuilder* animalBuilder;
public:
	AnimalCreater(AnimalBuilder* animalBuilder);
	void ConstructAnimal(int type,int id);
	Animal* getAnimal();

};

