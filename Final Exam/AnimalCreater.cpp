#include "AnimalCreater.h"

AnimalCreater::AnimalCreater(AnimalBuilder* animalBuilder) {
	this->animalBuilder = animalBuilder;
}

void AnimalCreater::ConstructAnimal(int type,int id) {
	animalBuilder->buildType();
	animalBuilder->buildId(id);
	string name = "";
	cout << "Enter name of the animal: ";
	cin >> name;
	animalBuilder->buildName(name);
	animalBuilder->buildMove();
	switch (type) {
	case 1:
		animalBuilder->buildWingspan(0);
		break;
	case 2:
		double wingspan;
		cout << "Enter wingspan of the bird: ";
		cin >> wingspan;
		animalBuilder->buildWingspan(wingspan);
		break;
	
	}

}
Animal* AnimalCreater::getAnimal() {
	return animalBuilder->getAnimal();
}