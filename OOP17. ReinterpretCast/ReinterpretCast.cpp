#include<iostream>

using namespace std;

int main() {
	// reinterpret_cast<new_type(expression)
	// pozvalyayet delat neprevilniye s tochki zreniya proqramirovaniya
	// cast s odnoqo tipa na druqoy (v otlichiye ot static_cast bez proverki)
	double number = 3.65;
	double* ptrNumber = &number;

	int* why = (int*)ptrNumber;
	int* whyWhy = reinterpret_cast<int*> (ptrNumber);
	int whyWhyWhy = reinterpret_cast<int> (ptrNumber);
	int whyWhyWhy1 = (int) ptrNumber;
	cout << why << endl;
	cout << whyWhy << endl;
	cout << whyWhyWhy << endl;
	cout << whyWhyWhy1 << endl;
	
}