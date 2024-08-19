#pragma once
#include "AnimalBuilder.h"

class Fish:public AnimalBuilder
{
private:
	Animal* animal;
	void buildWingspan(double wingspan) override;
public:
	Fish();
	
	void buildId(int id) override;
	void buildType() override;
	void buildName(string name) override;
	void const display() override;
	Animal* getAnimal() override;
	void buildMove() override;
};