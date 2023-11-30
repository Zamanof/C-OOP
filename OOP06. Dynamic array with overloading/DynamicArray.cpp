#include<iostream>
#include"Array.h"

using namespace std;

void foo(const Array arr) {
	cout << arr[0] << endl;
}


int main() {
	Array array1{ 5 };
	Array array2;
	
	/*cin >> array1;*/
	/*for (size_t i = 0; i < array1.length(); i++)
	{
		array1[i] = i;
	}
	for (size_t i = 0; i < array2.length(); i++)
	{
		array2[i] = i + 10;
	}*/
	array2[0] = 256;
	foo(array2);
	/*array1[0] = 5;
	cout << array1[0] << endl;*/
	/*cout << array1;
	cout << array2;*/

	// copy constructor
	/*Array array3{ array1 };
	cout << array3;

	array1 = array2;
	

	cout << array1;

	array1[125] = 6;*/
}