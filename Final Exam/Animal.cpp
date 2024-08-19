#include "Animal.h"

void Animal::setId(int id)
{
	this->id = id;
}
void Animal::setType(int type)
{
	this->type = type;
}
void Animal::setName(string name)
{
	this->name = name;
}
void Animal::setWingspan(double wingspan)
{
	this->wingspan = wingspan;
}
void Animal::setAdopted(bool adopted)
{
	this->adopted = adopted;
}
int Animal::getId()
{
	return id;
}
int Animal::getType()
{
	return type;
}
string Animal::getName()
{
	return name;
}
double Animal::getWingspan()
{
	return wingspan;
}
bool Animal::getAdopted()
{
	return adopted;
}

void Animal::setMove(string move)
{
	this->move = move;
}
string Animal::getMove()
{
	return move;
}
void Animal::display()
{
	string adop, type = "FISH";
	if (this->getAdopted() == false)
		adop = "NOT ADOPTED";
	else
		adop = "ADOPTED";
	if (this->getType() == 2) {
		type = "BIRD";
		cout << "|" << left << setw(10) << this->getId() << "|" << right << setw(10) << this->getName() << "|" << setw(10) << type << "|" << setw(10) << this->getWingspan() << "|" << setw(10) << adop << endl;
	}
		
	else{
		cout << "|" << left << setw(10) << this->getId() << "|" << right << setw(10) << this->getName() << "|" << setw(10) << type << "|" << setw(10) << "/---/" << "|" << setw(10) << adop << endl;
}
	
}
