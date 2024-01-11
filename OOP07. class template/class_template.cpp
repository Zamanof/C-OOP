#include<iostream>
#include"overloading_template.h"

using namespace std;

template<class T>
T Max(T left, T right) {
	return (left> right?left:right);
}

template<>
const char* Max(const char* left, const char* right) {
	
	return (strcmp(left, right) > 0 ? left : right);
}


template<class T1, class T2>
class Test {
	T1 field1;
	T2 field2;
public:
	Test(T1 a) 
		: field1{ a } 
	{}
	void showInfo() {
		cout << "Template class" << endl;
		cout << typeid(field1).name() << endl;
		cout << typeid(field2).name() << endl;
	}
};

template<>
class Test<double, float> {
	double field1;
	float field2;
public:
	Test(double a)
		: field1{ a }
	{}
	void showInfo() {
		cout << "Specialization template class" << endl;
		cout << typeid(field1).name() << endl;
		cout << typeid(field2).name() << endl;
	}
};



int main() {
	// static polymorphism: 
	// function overlaoding
	// template functions
	// operator overloading
	// template class	
#pragma region overloading tepmplate functions
/*foo<int>(25, 10);
	foo(5, 15);
	foo(25.6, 10.6);
	foo("Salam", "Aleykum");*/

	/*cout << bar<int, double>(2.5, 2.3) << endl;*/
#pragma endregion

	/*Test<char, int> test1{'a'};
	test1.showInfo();

	Test<double, float> test2(2.6);
	test2.showInfo();

	Test<double, int> test3{2.62};
	test3.showInfo();*/
	
	cout << Max(2, 69) << endl;
	cout << Max(252.6, 69.6) << endl;
	cout << Max('a', 'b') << endl;
	cout << Max("Abdullah", "Abdulla") << endl;
}

