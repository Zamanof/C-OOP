#include <iostream>

using namespace std;

// Abstract class
class Animal
{
public:
	string name;
	// Pure virtual method - chisto virtual metod
	virtual void Sound() = 0;
};

class Mammal : public Animal
{};

class Cat : public Mammal
{
public:
	float price;
	void Sound() override
	{
		cout << name << " - Meow meow" << endl;
	}
	virtual void LifeIdea() = 0;
};

class Dog : public Mammal
{
public:
	int age;
	// override - peropredeleniye metodov
	void Sound() override
	{
		cout << name << " - Gaw gaw" << endl;
	}
	virtual void Define() = 0;
};

class CheshirCat : public Cat
{
public:
	void Sound() override 
	{
		cout << name << " - Smile" << endl;
	}
	void LifeIdea() override 
	{
		cout << "Zaputat proxojix umnimi slovami" << endl;
	}
};
class Sphynx : public Cat
{
public:
	void LifeIdea() override
	{
		cout << "Lisiy i blox ne budet" << endl;
	}
};

void infoAnimal(Animal& animal) {
	cout << "This is " << animal.name << endl;
	animal.Sound();
}
void infoMammal(Mammal& mammal) {
	cout << "This is " << mammal.name << endl;
	mammal.Sound();
}

void infoCat(Cat& cat) {
	cout << "This is " << cat.name << endl;
	cat.Sound();
}

int main() {
	CheshirCat cheshir;
	cheshir.name = "Cheshir";
	infoAnimal(cheshir);
	infoMammal(cheshir);
	infoCat(cheshir);
	cheshir.LifeIdea();
	
}