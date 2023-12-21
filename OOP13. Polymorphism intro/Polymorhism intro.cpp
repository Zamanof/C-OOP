#include<iostream>

using namespace std;

// static polymorphism
template <class T>
T foo(T a, T b) {
	return a + b;
}

//int foo(int a, int b) {
//	return a + b;
//}
//
//string foo(string a, string b) {
//	return a + b;
//}

class Animal
{
public:
	string name;
	virtual void Sound() {
		cout << name << " - some sound" << endl;
	}
};

class Dog : public Animal
{
public:
	int age;
	// override - peropredeleniye metodov
	void Sound() override
	{
		cout << name << " - Gaw gaw" << endl;
	}
};

class Cat : public Animal
{
public:
	float price;
	void Sound() override
	{
		cout << name << " - Meow meow" << endl;
	}
};

class CheshirCat : public Cat
{
public:
	void Sound() override
	{
		cout << name << " - Smile" << endl;
	}
};

//void info(Dog dog) {
//	cout << "This is " << dog.name << endl;
//	dog.Sound();
//}
//
//void info(Cat cat) {
//	cout << "This is " << cat.name << endl;
//	cat.Sound();
//}

void info(Animal& animal)
{
	cout << "This is " << animal.name << endl;
	animal.Sound();
}

void info(Animal* animal) {
	cout << "This is " << animal->name << endl;
	animal->Sound();
}

void other(Animal animal) {
	cout << "This is " << animal.name << endl;
	animal.Sound();
}
int main() {
#pragma region Static polymorphism
	/*
		static polymorphism:
			function overlaoding
			template functions
			operator overloading
			template class
		*/

		/*cout << foo<int>(2, 5) << endl;
		string a = "Hello ";
		string b = "World!";
		cout << foo(a, b) << endl;*/
#pragma endregion

	Animal animal;
	animal.name = "666";
	Dog dog;
	dog.age = 1256;
	dog.name = "Cerber";
	Cat cat;
	cat.name = "Mastan";
	cat.price = 2365.65;

	/*animal.Sound();
	dog.Sound();
	cat.Sound();*/

	// ukazatel (ssilka) na bazoviy class
	/*Animal& cat1 = cat;
	Animal& dog1 = dog;

	cout << cat1.name << endl;
	cout << dog1.name << endl;

	cat1.Sound();
	dog1.Sound();

	Animal* cat2 = new Cat();
	cat2->name = "StepCat";
	Animal* dog2 = new Dog();
	dog2->name = "Neznayu";
	cat2->Sound();
	dog2->Sound();*/
	/*info(cat);
	info(dog);
	info(&cat);
	info(&dog);*/

	/*other(cat);
	other(dog);*/

	/*CheshirCat cheshir;
	cheshir.name = "Cheshire cat";
	info(cheshir);*/
	/*Animal* animals = new Animal[5]{
	Dog(),
	Dog(),
	CheshirCat(),
	Cat()
	};
	for (size_t i = 0; i < 5; i++)
	{
		animals[i].Sound();
	}*/
	
}