#include<iostream>
#include"DynamicArray.h"

using namespace std;
DynamicArray foo(DynamicArray array) {
	array.randomize();
	return array;
}


int main() {
	// default methods in any c++ class:
	// constructor
	// destructor
	// copy constructor
	// move constructor

	DynamicArray dynamicArray1(10000);
	/*dynamicArray1.randomize();*/
	/*dynamicArray1.show();*/

	/*DynamicArray dynamicArray2(dynamicArray1);
	dynamicArray2.show();*/

	/*DynamicArray dynamicArray3 = dynamicArray1;
	dynamicArray3.show();*/

	DynamicArray dynamicArray4;
	dynamicArray4 = foo(dynamicArray1);
	dynamicArray4.show();
}