#include<iostream>

using namespace std;

class Base
{
public:
	int fieldA;
	void methodBase()
	{
		cout << "Base class method" << endl;
	}
	virtual ~Base() = 0;
};

Base::~Base(){}
class Derived : public Base
{

};

int main() {
	// Vitual destructor and Pure virtual destructor
	Derived derived;
	derived.methodBase();
}