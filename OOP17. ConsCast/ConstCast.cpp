#include<iostream>

using namespace std;

void foo(const int* number1, const int& number2, int* number3){
	int* fooNumber = const_cast<int*>(number1);
	*fooNumber = 1589;
	const_cast<int&>(number2) = 698;
	/*const int* fooNumber3 = const_cast<int*>(number3);
	*fooNumber3 = 25;*/
}

int main() {
	// const_cast<new_type(expression) - pozvalyayet ubrat ili dobavlyat konstantnost
	// u iznalchalno konstatntnix peremennix nelzya ubrat konstantnost;
	/*const int number = 2;
	int number2 = const_cast<int> number;*/
	
	// u iznalchalno nekonstatntnim peremennim nelzya dobavlyat konstantnost;
	/*int numb1 = 25;
	const int numb2 = const_cast<const int> numb1;*/

	// const_cast rabotaet tolka ukazatelyami i ssilkami


	int numb1 = 10;
	int numb2 = 13;
	int numb3 = 135;
	// void foo(const int* number1, const int& number2)
	cout << "Before function calling" << endl;
	cout << "numb1 = " << numb1 << endl;
	cout << "numb2 = " << numb2 << endl;
	foo(&numb1, numb2);
	cout << "After function calling" << endl;
	cout << "numb1 = " << numb1 << endl;
	cout << "numb2 = " << numb2 << endl;
}
