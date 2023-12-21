#include<iostream>

using namespace std;

class Base {
public:
	virtual void method()
	{
		cout << "Base method" << endl;
	}
};

class Derived : public Base
{
	// prerivayem dly dalneyshix naslednikov vozmojnost pereopredelyat 
	// virtualniy method bazovoqo class-a 
	void method() override final
	{
		cout << "Derived method" << endl;
	}
};


class GrandDerived : public Derived
{
	/*void method()
	{
		cout << "Grand Derived method" << endl;
	}*/
};

void foo(Base& object) {
	object.method();
}

int main() {
	Derived derived;
	GrandDerived grandDerived;
	foo(derived);
	foo(grandDerived);
}