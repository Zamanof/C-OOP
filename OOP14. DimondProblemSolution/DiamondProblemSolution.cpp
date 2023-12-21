#include<iostream>

using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base class Constructor" << endl;
	}
};

class DerivedA : virtual public Base {
public:
	DerivedA()
	{
		cout << "DerivedA class Constructor" << endl;
	}
};
class DerivedB : virtual public Base {
public:
	DerivedB()
	{
		cout << "DerivedB class Constructor" << endl;
	}
};

class DiamondChild: public DerivedA, public DerivedB
{
public:
	DiamondChild()
	{
		cout << "DiamondChild class Constructor" << endl;
	}
};

int main() {
	DiamondChild diamond;

}