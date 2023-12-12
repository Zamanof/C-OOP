#include<iostream>

using namespace std;

class Address
{
private:
	string city;
	string street;
	int house;
	int apartment;
public:
	Address(string city, string street, int house, int apartment = 0)
		:city(city), street(street), house(house), apartment(apartment)
	{
		cout << "Address was created" << endl;
	}

	void show() {
		cout << "City:\t\t" << city << ";" << endl;
		cout << "Street:\t\t" << street << ";" << endl;
		cout << "House:\t\t" << house << ";" << endl;
		if (apartment != 0) {
			cout << "Apartment:\t" << city << ";" << endl;
		}
		cout << endl;
	}
	~Address()
	{
		cout << "Address was deleted" << endl;
	}
};

class Student {
private:
	string firstname;
	string lastname;
	int age;
	float averScore;
	Address& address;
public:
	Student(string firstname, string lastname, int age, float score, Address& address)
		:firstname(firstname),
		lastname(lastname),
		age(age),
		averScore(score),
		address(address)
	{}
	void show() {
		cout << "Hello I am " << firstname << ' ' << lastname << endl;
		cout << "I'm " << age << " years old" << endl;
		cout << "My address\n";
		address.show();
	}
};

class Teacher
{
private:
	string firstname;
	string lastname;
	int age;
	float salary;
	Address& address;
public:
	Teacher(string firstname, string lastname, int age, float salary, Address& address)
		: firstname(firstname),
		lastname(lastname),
		age(age),
		salary(salary),
		address(address)
	{}
	void show() {
		cout << "Hello I am " << firstname << ' ' << lastname << endl;
		cout << "I'm " << age << " years old" << endl;
		cout << "My address:\n";
		address.show();
	}
};


int main() {
	// relations - otnosheniya
	// is - Yavlyaetsya (odin iz raznovidnostey) : Inheritance (nasledovaniye)
	// has - imeet (soderjit) - Aggregation, Composition
	// depends on - zavisit ot
	// uses - ispolzuyetsya
	// part-whole - chast-seloye : Nested classes (vlojenniye class-i)

	// Aggregation
	// 1. obyekt chast vxodit v sostav obyekt seloe
	// 2. obyekt chast mojet prinadlejat bolee chem odnomu obyektu-selomu
	// 3. obyekt chast mojet sushestvovat vne obyekta seloqo
	// 4. obyekt chast ne soderjit informasiyu ob obyekte selom

	Address address("Absheron", "Saray MTK", 70, 10);
	Student student("Ayan", "Zaman", 11, 11.5, address);
	Teacher teacher("Nadir", "Zamanov", 42, 150000, address);

	student.show();
	teacher.show();

}