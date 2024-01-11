#include<iostream>
// biblioteka s umnimi ukzatelami i ne tolko
#include<memory>

using namespace std;
template <class T>
class my_smart_Pointer {
private:
	T* ptr;
public:
	explicit my_smart_Pointer(T* ptr = nullptr)
		:ptr(ptr) {}
	~my_smart_Pointer() { delete ptr; }
	T& operator* ()const
	{
		return *ptr;
	}
	T* operator->()const
	{
		return ptr;
	}
};

class Test {
public:
	string text;
	Test():text("Salam") { cout << "Constructed" << endl; }
	~Test() { cout << "Destructed" << endl; }
	void testFoo() {
		cout << "Fooooo" << endl;
	}
};

class ForShared {
	string name;
	int* array;
public:
	ForShared(string name) :name(name) {
		array = new int[10000];
		cout << "Object - " << name << " constructed" << endl;
	}
	~ForShared() {
		delete[] array;
		cout << "Object - " << name << " destructed" << endl;
	}
	void Foo() {
		cout << "Fooooo" << endl;
	}
};

//void foo() {
//	Test* test = new Test();
//	/*return;*/
//	throw new exception();
//	delete test;
//}

my_smart_Pointer<Test> foo() {
	my_smart_Pointer<Test> tmp(new Test);
	/*throw new exception;*/
	return tmp;
}

auto_ptr<Test> foo1() {
	auto_ptr<Test> tmp(new Test);
	return tmp;
}

unique_ptr<Test> foo2() {
	unique_ptr<Test> tmp(new Test);
	return tmp;
}

int main() {
	// smart pointers
	// auto_ptr
	// unique_ptr
	// shared_ptr
	// weak_ptr

	/*my_smart_Pointer<Test> test(foo());
	test->testFoo();*/

	/*auto_ptr<Test> test(foo1());
	test->testFoo();*/

	/*unique_ptr<Test> test1(foo2());
	test1->testFoo();*/

	/*Test* test3 = new Test();*/
	/*unique_ptr<Test> test4(new Test);*/

	/*Test* t1 = new Test();
	cout << t1->text << endl;
	delete t1;
	Test* t2 = t1;
	for (size_t i = 0; i < 3; i++)
	{
		cout << t2->text << endl;

	}*/

	/*unique_ptr<Test> t3(new Test());
	unique_ptr<Test> t4(t3);*/

	shared_ptr<ForShared> shared1(new ForShared("object1"));
	shared_ptr<ForShared> shared2(shared1);
	{
		shared_ptr<ForShared> shared3(shared1);
		cout << "Share " << shared1.use_count() << " smart pointers" << endl;
	}
	cout <<"Share " << shared1.use_count()<<" smart pointers" << endl;
	

	
}