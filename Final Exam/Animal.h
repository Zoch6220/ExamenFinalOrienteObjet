#pragma once
#include "AnimalPlan.h"
#include<iomanip>

class Animal :public AnimalPlan
{

public:
	void setId(int id) override;
	void setType(int type) override;
	void setName(string name) override;
	void setWingspan(double wingspan) override;
	void setAdopted(bool adopted) override;
	int getId() override;
	int getType() override;
	string getName() override;
	double getWingspan()override;
	bool getAdopted() override;
	void setMove(string move) override;
	string getMove() override;
	void display() override;
};
