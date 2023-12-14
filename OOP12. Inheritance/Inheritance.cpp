#include<iostream>
#include<format>

using namespace std;

/*
Base class
class Vehicle
{
	Fields
	Engine
	Wheels

	viewInfo()
	viewFuel()
	refuel()
	start()
	move()
}
Derived class
class Truck : public Vehicle
{
	
}

class Bus : public Vehicle
{
	
}


*/

class Person 
{
protected:
	string firstname;
	string lastname;
	int age;
public:
	Person(string firstname, string lastname, int age)
		:firstname(firstname), lastname(lastname), age(age)
	{
		cout << "Person parametrized constructor" << endl;
	}
	Person()
	{
		firstname = "Empty";
		lastname = "Empty";
		age = 0;
		cout << "Person default constructor" << endl;
	}

	string getInfo() const
	{
		string result = format("First name: {}, Last name: {}, Age: {}\n", 
			firstname, lastname, age);
		return result;
	}

	string getGreetings(string message = "")const
	{
		string result = format("I'm {}.", firstname);
		if (!message.empty()) 
		{
			result += " I say: ";
			result += message;
		}
		else 
		{
			result += " I say nothing.";
		}
		return result;
	}
	~Person()
	{
		cout << "Person desctrucor" << endl;
	}
};

class Student : public Person
{
private:
	string faculty;
	int score;
	
	bool isSuccessful() const
	{
		if (score >= 7) return true;
		else return false;
	}
public:
	Student(int score, string faculty = "Development")
		:faculty(faculty), score(score)
	{
		cout << "Student parametrized constructor" << endl;
	}

	Student(string firstname, string lastname, int age, int score, string faculty = "Development")
		: Person(firstname, lastname, age),
		score(score),
		faculty(faculty)
	{
		cout << "Student parametrized constructor" << endl;
	}

	Student()
	{
		score = 0;
		faculty = "Empty";
		cout << "Student default constructor" << endl;
	}

	

	void successfulInfo() const
	{
		cout << "Hi I'm " << firstname << " " << lastname << endl;
		if (isSuccessful()) 
		{
			cout << "I'm successful student. WOWWWWWWWWWWWW" << endl;
		}
		else 
		{
			cout << "Bextiniz bir daha sinayin. Peresdacha(((" << endl;
		}
	}
	~Student()
	{
		cout << "Student desctrucor" << endl;
	}
};
int main() {
	/*
		Base class			->		Derived class
		Bazoviy class		->		Proizvodniy class

		Super class			->		Sub class
		Superklass			->		Podklass

		Parent class		->		Child class
		Roditelskiy class	->		Docherniy class
	*/

	/*Student student(12);
	cout << student.getInfo() << endl;*/

	/*Student student1("Nadir", "Zamanov", 42, 12);
	cout << student1.getInfo() << endl;
	cout << student1.getGreetings("Supperr Pupper Mupper") << endl;
	student1.successfulInfo();*/

	/*Person person("Nadir", "Zamanov", 42);*/

}