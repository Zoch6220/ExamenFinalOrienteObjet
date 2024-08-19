#pragma once
#include <iostream>
using namespace std;
class AnimalPlan
{
protected:
	int id=0;
	int type = 0;
	string name = "";
	bool adopted= false;
	double wingspan = 0;
	string move = "";

public:
	virtual void setId(int id) = 0;
	virtual void setType(int type) = 0;
	virtual void setName(string name) = 0;
	virtual void setWingspan(double wingspan) = 0;
	virtual void setAdopted(bool adopted) = 0;
	virtual int getId() = 0;
	virtual int getType() = 0;
	virtual string getName() = 0;
	virtual double getWingspan() = 0;
	virtual bool getAdopted() = 0;
	virtual void setMove(string moving) = 0;
	virtual string getMove() = 0;
	virtual void display() = 0;

};

