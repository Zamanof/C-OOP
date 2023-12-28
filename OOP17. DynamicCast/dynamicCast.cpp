#include<iostream>
#include<typeinfo>

using namespace std;

class Animal
{
public:
	string name;
	virtual void Sound()
	{
		cout << "Some Sound\n" << endl;
	}
};

class Dog : public Animal
{
public:
	int age;
	void Sound() override
	{
		cout << "Gaw gaw\n" << endl;
	}
	void fooDog()
	{
		cout << "Dog foo\n" << endl;
	}
};

class Cat : public Animal
{
public:
	float price;
	void Sound() override
	{
		cout << "Meow meow\n" << endl;
	}
	void fooCat()
	{
		cout << "Cat foo\n" << endl;
	}
};

class Cheshire : public Cat
{
public:
	float price;
	void Sound() override
	{
		cout << "Smile Meow, smile meow\n" << endl;
	}
	void fooCheshire()
	{
		cout << "Cheshire foo\n" << endl;
	}
};


void someFunction(Animal* animal)
{
	animal->Sound();
	Cat* cat = dynamic_cast<Cat*>(animal);
	if (cat != nullptr) {
		cat->fooCat();
	}

	Dog* dog = dynamic_cast<Dog*>(animal);
	if (dog != nullptr) {
		dog->fooDog();
	}

	Cheshire* cheshire = dynamic_cast<Cheshire*>(animal);
	if (cheshire != nullptr) {
		cheshire->fooCheshire();
	}
}

void someFunctionRef(Animal& animal) {
	animal.Sound();

	try
	{
		Cat& cat = dynamic_cast<Cat&>(animal);
		cat.fooCat();
	}
	catch(bad_cast cast)
	{
		cout << "Invalid cast" << endl;
	}
}


void someFunctionTypeId(Animal* animal) {
	/*animal->Sound();*/
	const type_info& type = typeid(*animal);
	/*cout<< type.name() <<endl;*/

	if (type == typeid(Cat)) {
		static_cast<Cat*>(animal)->fooCat();
	}

	if (type == typeid(Dog)) {
		reinterpret_cast<Dog*>(animal)->fooDog();
	}

	if (type == typeid(Cheshire)) {
		((Cheshire*)(animal))->fooCheshire();
	}
}

int main() {
	// dynamic_cast<new_type(expression) -  dlya polimorfnix probrazavaniy
	Cat cat;
	Dog dog;
	Cheshire cheshire;
	Animal animal;
	/*someFunction(&cat);
	someFunction(&dog);
	someFunction(&cheshire);
	someFunction(&animal);*/

	/*someFunctionRef(cat);
	someFunctionRef(dog);
	someFunctionRef(cheshire);
	someFunctionRef(animal);*/

	someFunctionTypeId(&cat);
	someFunctionTypeId(&dog);
	someFunctionTypeId(&cheshire);
	someFunctionTypeId(&animal);

}