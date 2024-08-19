#pragma once
#include "animal.h"
#include<iomanip>
class AnimalBuilder{
public:

	virtual void buildId(int id) = 0;
	virtual void buildType() = 0;
	virtual void buildName(string name) = 0;
	virtual void buildWingspan(double wingspan) = 0;
	virtual Animal* getAnimal() = 0;
	virtual void const display() = 0;
	virtual void buildMove() = 0;


};
