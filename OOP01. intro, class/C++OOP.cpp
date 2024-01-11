#include<iostream>

using namespace std;
struct Employee
{
	char name[50];
	char surname[50];
	int age;
};

class Human
{
private:
	int age;
	void init() {
		strcpy_s(name, "Nadir");
		age = 42;
	}

protected:
	char name[50];

public:
	char surname[50];

	void info() {
		init();
		cout << name << endl;
		cout << surname << endl;
		cout << age << endl;
		cout << '\n';
	}

};



int main() {
	// OOP - Object Oriented Paradigm (Programming)

	// OOP Principles
	// 1. Inheritance - Nasledovaniye
	// 2. Encapsulation - Inkapsulyasiya
	// 3. Polymorphism - Polimorfizm
	// 4. Abstraction - Abstraksiya


	/*Employee employee = { "Nadir", "Zamanov", 42 };
	cout << employee.name << endl;
	cout << employee.surname << endl;
	cout << employee.age << endl;
	cout << '\n';*/
	/*Human human1 = { "Nadir", "Zamanov", 42 };
	cout << human1.name << endl;
	cout << human1.surname << endl;
	cout << human1.age << endl;
	
	cout << '\n';

	Human human2 = { "Ali", "Bayramov", 15 };
	cout << human2.name << endl;
	cout << human2.surname << endl;
	cout << human2.age << endl;*/
	Human human3;
	strcpy_s(human3.surname, "Zamanov");
	human3.info();
	strcpy_s(human3.surname, "Kamalov");

	human3.info();

	// access modificators
	// 1. public	-	publichniy		(eti danniye dostupni vsem (vnutri i vne class-a))
	// 2. private	-	privatniy		(eti danniye dostupni tolko vnutri class-a)
	// 3. protected -	zashishenniy	(eti danniye dostupni tolko vnutri class-a i v dochernix klassax)
}
