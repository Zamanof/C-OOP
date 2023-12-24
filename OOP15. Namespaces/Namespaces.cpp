#include<iostream>
#include"combats1.h"
#include"combats2.h"

using namespace std;

int a = 5;

namespace exploration 
{
	int a = 251;
	int number = 65;
	void fire() {
		cout << "Fire" << endl;
	}
}

namespace
{
	void function() {
		cout << "Function" << endl;
	}
}


int main()
{
	// Namespaces - prostranstvo imen
	/*
	namespace name
	{
		data
	}
	*/
	
	/*combat::fire();
	exploration::fire();
	cout << a << endl;
	int a = 25;
	cout << a << endl;
	cout << ::a << endl;
	cout << exploration::a << endl;
	combat::defence();
	
	using namespace combat;

	fire();
	defence();

	using exploration::number;
	cout << number << endl;*/

	::function();
}