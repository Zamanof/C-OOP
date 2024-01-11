#include<iostream>

using namespace std;

class ForShared
{
private:
	string name;
	int* array;
public:
	ForShared(string name)
		: name(name)
	{
		array = new int[10000];
		cout << "Object " << name << " constructed!" << endl;
	}
	~ForShared()
	{
		delete[] array;
		cout << "Object " << name << " destructed!" << endl;
	}

	void foo()
	{
		cout << "Object " << name << " foooo!" << endl;
	}

};

int main()
{
	// weak pointer
	ForShared* shared = new ForShared("first");
	shared_ptr<ForShared> shPtr1(shared);
	shared_ptr<ForShared> shPtr2(shPtr1);
 	cout << "use count = " << shPtr1.use_count() << endl;
	weak_ptr<ForShared> weakPtr(shPtr1);
	cout << "use count = " << weakPtr.use_count() << endl;

	((shared_ptr<ForShared>)weakPtr)->foo();


}