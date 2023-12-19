#include<iostream>

using namespace std;

class Base
{
public:
	Base() 
	{
		cout << "Constructor Base" << endl;
	}
	void Show() {
		cout << "Show Base" << endl;
	}
	~Base()
	{
		cout << "Destructor Base" << endl;
	}
};

class DerivedA : public Base 
{
public:
	DerivedA()
	{
		cout << "Constructor DerivedA" << endl;
	}
	void Show() {
		cout << "Show DerivedA" << endl;
	}
	~DerivedA()
	{
		cout << "Destructor DerivedA" << endl;
	}
};

class DerivedB : public Base
{
public:
	DerivedB()
	{
		cout << "Constructor DerivedB" << endl;
	}
	void Show() {
		cout << "Show DerivedB" << endl;
	}
	~DerivedB()
	{
		cout << "Destructor DerivedB" << endl;
	}
};

// diamond inheritance problem - problema rombavidnoqo nasledovaniya
class DerivedAB : public DerivedA, public DerivedB
{
public:
	DerivedAB()
	{
		cout << "Constructor DerivedAB" << endl;
	}
	
	~DerivedAB()
	{
		cout << "Destructor DerivedAB" << endl;
	}
};

int main() {
	// Diamond problem
	DerivedAB objAB;

}