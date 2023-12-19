#include<iostream>

using namespace std;

class BaseClass
{
private:
	// public for self and friend class or methods, 
	// private for all
	int privateBaseField = 13;
protected:
	// public for self and friend class or methods, 
	// publcic for derived class, private for all
	int protectedBaseField = 25;
public:
	// public for all
	int publicBaseField = 325;
};

class DerivedPublic :public BaseClass
{
public:
	void accessInfo()
	{
		cout << ": public BaseClass" << endl;
		cout << "Have access public fields and methods: " << endl;
		cout << "	publicBaseField = "<< publicBaseField << endl;
		cout << string(30, '-') << endl;
		cout << "Have access protected fields and methods: " << endl;
		cout << "	protectedBaseField = "<< protectedBaseField << endl;
		cout << string(30, '-') << endl;
		cout << "Don't have access private fields and methods: " << endl;
	}
};

class DerivedProtected :protected BaseClass
{
public:
	void accessInfo()
	{
		cout << ": protected BaseClass" << endl;
		cout << "Have access public fields and methods: " << endl;
		cout << "	publicBaseField = " << publicBaseField << endl;
		cout << string(30, '-') << endl;
		cout << "Have access protected fields and methods: " << endl;
		cout << "	protectedBaseField = " << protectedBaseField << endl;
		cout << string(30, '-') << endl;
		cout << "Don't have access private fields and methods: " << endl;
	}
};

class DerivedPrivate :private BaseClass
{
public:
	void accessInfo()
	{
		cout << ": private BaseClass" << endl;
		cout << "Have access public fields and methods: " << endl;
		cout << "	publicBaseField = " << publicBaseField << endl;
		cout << string(30, '-') << endl;
		cout << "Have access protected fields and methods: " << endl;
		cout << "	protectedBaseField = " << protectedBaseField << endl;
		cout << string(30, '-') << endl;
		cout << "Don't have access private fields and methods: " << endl;
	}
};

class ThirdInheritanceFromPublic : public DerivedPublic
{
public:
	void accessInfo()
	{
		cout << ": public DerivedPublic" << endl;
		cout << "Have access public fields and methods from BaseClass: " << endl;
		cout << "	publicBaseField = " << publicBaseField << endl;
		cout << string(30, '-') << endl;
		cout << "Have access protected fields and methods from BaseClass: " << endl;
		cout << "	protectedBaseField = " << protectedBaseField << endl;
		cout << string(30, '-') << endl;
		cout << "Don't have access private fields and methods: " << endl;
	}
};


class ThirdInheritanceFromProtected : public DerivedProtected
{
public:
	void accessInfo()
	{
		cout << ": public DerivedProtected" << endl;
		cout << "Have access public fields and methods from BaseClass: " << endl;
		cout << "BaseClass public field -> protected field: " << endl;
		cout << "	publicBaseField = " << publicBaseField << endl;
		cout << string(30, '-') << endl;
		cout << "Have access protected fields and methods from BaseClass: " << endl;
		cout << "	protectedBaseField = " << protectedBaseField << endl;
		cout << string(30, '-') << endl;
		cout << "Don't have access private fields and methods: " << endl;
	}
};

class ThirdInheritanceFromPrivate : public DerivedPrivate
{
public:
	void accessInfo()
	{
		cout << ": public DerivedProtected" << endl;
		cout << "Don't have access public fields and methods from BaseClass: " << endl;
		cout << "BaseClass public field -> private field: " << endl;
	
		cout << string(30, '-') << endl;
		cout << "Don't have access protected fields and methods from BaseClass: " << endl;
		cout << "BaseClass protected field -> private field: " << endl;

		cout << string(30, '-') << endl;
		cout << "Don't have access private fields and methods: " << endl;
	}
};
int main() 
{
	DerivedPublic derivedPublic;
	derivedPublic.accessInfo();
	cout << derivedPublic.publicBaseField << endl;
	
	DerivedProtected derivedProtected;
	derivedProtected.accessInfo();

	DerivedPrivate derivedPrivate;
	derivedPrivate.accessInfo();
	
	/*ThirdInheritanceFromPublic obj1;
	cout << obj1.publicBaseField << endl;
	ThirdInheritanceFromProtected obj2;*/
	
	
}