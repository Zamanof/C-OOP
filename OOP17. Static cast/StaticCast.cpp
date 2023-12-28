#include<iostream>

using namespace std;

int main() {
	// Casts:
	
#pragma region C style cast
// C style cast
	/*float price = (float)2.5;
	char symbol = (char)129; 
	char character = 67;
	cout << symbol << endl;
	cout << character << endl;
	int number = 'U';
	int number2 = (int)'U';
	cout << number << endl;
	cout << number2 << endl;
	int price2 = price;
	int price3 = (int)price;
	cout << price2 << endl;
	cout << price3 << endl;*/
#pragma endregion

	// static_cast<new_type(expression) - dlya nepolimorfnix probrazavaniy
	// dynamic_cast<new_type(expression) -  dlya polimorfnix probrazavaniy
	// const_cast<new_type(expression)
	// reinterpret_cast<new_type(expression)

	/*double number = 37.6;
	float number2 = static_cast<float>(number);
	cout << number2 << endl;*/
	
	/*int a = 10;
	int b = 4;*/
	/*float result = static_cast<float>(a) / b;
	cout << result << endl;*/

	/*int* ptrA = &a;
	double* ptrDbl = (double*)ptrA;
	double* ptrDouble = static_cast<double*>(ptrA);
	cout << *ptrDbl << endl;*/


}