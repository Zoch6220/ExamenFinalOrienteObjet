#pragma once

#include "Animal.h"
#include "AnimalBuilder.h"
class Bird: public AnimalBuilder
{
private:
	Animal* animal;
public:
	Bird();

	void buildId(int id) override;
	void buildType() override;
	void buildName(string name) override;
	void buildWingspan(double wingspan) override;
	void const display() override;
	Animal* getAnimal() override;
	void buildMove() override;

};