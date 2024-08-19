#include "AnimalRescueCenter.h"
#include <iostream>

AnimalRescueCenter::AnimalRescueCenter() {

	numberOfAnimals = 0;
}
Animal* AnimalRescueCenter::createAnimal(int type) {

	AnimalBuilder* animalBuilder;
	AnimalCreater* creater = nullptr;
	switch (type) {
	case 1:
		animalBuilder = new Fish();
		creater = new AnimalCreater(animalBuilder);

		break;
	case 2:
		animalBuilder = new Bird();
		creater = new AnimalCreater(animalBuilder);
		break;

	}
	creater->ConstructAnimal(type, numberOfAnimals + 1);
	return creater->getAnimal();

}
//allow the user to add an animal and to create it using the builder pattern
void AnimalRescueCenter::addAnimal() {
	int type = 0;
	do
	{
		cout << "Enter the type of the animal (1 for fish, 2 for bird): ";
		cin >> type;

	} while (type != 1 && type != 2);
	Animal* p_animal = createAnimal(type);

	animals[numberOfAnimals] = p_animal;

	numberOfAnimals++;
}
//allow the user to adopte an animal
void AnimalRescueCenter::giveAnimalForAdoption() {
	displayAllAvailableAnimals();
	int id = 0;
	int index = 0;
	do {
		cout << "Enter the id of the animal to give for adoption or 0 to cancel: ";
		cin >> id;
		index = searchAvailableAnimal(id);
		if (index != -1) {
			animals[index]->setAdopted(true);
		}
		else if (id != 0) {
			cout << "Invalid id!" << endl;
		}

	} while (index == -1 && id != 0);

}

void AnimalRescueCenter::displayAllAvailableAnimals() {
	cout << "Available animals: " << endl;
	cout << "|" << left << setw(10) << "ID" << "|" << setw(10) << "Name" << "|" << setw(10) << "Type" << "|" << setw(10) << "Wingspan" << "|" << setw(10) << "Adopted" << endl;
	if (animals[0] != nullptr) {
		for (int i = 0; i < numberOfAnimals; i++) {

			if (animals[i]->getAdopted() == false) {
				animals[i]->display();
			}

		}
	}
	else {
		cout << "No animals have been added yet!" << endl;
	}
}
void AnimalRescueCenter::makeTheAdoptedAnimalsMove() {
	cout << "The moving Animals are: " << endl;
	bool display = false;
	for (int i = 0; i < numberOfAnimals; i++) {
		if (animals[i]->getAdopted() == true) {
			cout << animals[i]->getMove() << endl;
			display = true;
		}

	}
	if (!display)
		cout << "No animals have been adopted" << endl;
}
int AnimalRescueCenter::searchAvailableAnimal(int id) {

	for (int i = 0; i < numberOfAnimals; i++) {
		if (animals[i]->getId() == id) {
			return i;
		}
	}
	return -1;

}
