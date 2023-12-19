#include<iostream>

using namespace std;

class A {
public:
	int fieldA;
	A()
	{
		cout << "Constructor A" << endl;
	}
	void methodA() {
		cout << "Method A" << endl;
	}
	void show() {
		cout << "Show A" << endl;
	}
	~A()
	{
		cout << "Destructor A" << endl;
	}
};

class B {
public:
	int fieldB;
	B()
	{
		cout << "Constructor B" << endl;
	}
	void methodB() {
		cout << "Method B" << endl;
	}
	void show() {
		cout << "Show B" << endl;
	}
	~B()
	{
		cout << "Destructor B" << endl;
	}
};

class C : public A, public B 
{
public:
	C()
	{
		cout << "Constructor C" << endl;
	}
	int fieldC;
	void methodC() {
		cout << "Method C" << endl;
	}
	void show() {
		A::show();
		B::show();
		cout << "Show C" << endl;
	}
	~C()
	{
		cout << "Destructor C" << endl;
	}
};

class D : public A, public C 
{
public:
	D()
	{
		cout << "Constructor D" << endl;
	}
	
	~D()
	{
		cout << "Destructor D" << endl;
	}
};

int main() {
	// Multiple inheritance
	/*C objC;
	objC.fieldA = 12;
	objC.fieldB = 65;
	objC.fieldC = 22;
	objC.methodA();
	objC.methodB();
	objC.methodC();
	objC.A::show();
	objC.B::show();
	objC.show();*/
	/*D objD;*/




}