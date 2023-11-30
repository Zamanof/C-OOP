#include "Array.h"
#include<iostream>
#include<iomanip>
#include<stdexcept>
#include<conio.h>

using namespace std;

Array::Array(int size)
	:size{size}, arr{new int[size]}
{}

Array::Array(const Array& array)
	:size{ array.size }, arr{new int[size]}
{
	for (size_t i = 0; i < size; i++)
	{
		this->arr[i] = array.arr[i];
	}
}

Array::~Array() {
	delete[] arr;
}

int Array::length() const
{
	return size;
}

// assign operator overloading
const Array& Array::operator=(const Array& array) 
{
	if (&array != this) {
		if (size != array.size) {
			delete[] arr;
			size = array.size;
			arr = new int[size];
		}
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = array.arr[i];
		}
	}
	return *this;
}
// logial operators ==, !=
bool Array::operator==(const Array& array) const
{
	if (size != array.size) {
		return false;
	}
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] != array.arr[i]) {
			return false;
		}
	}
	return true;
}

bool Array::operator!=(const Array& array) const {
	return !(*this == array);
}

// index operator
int& Array::operator[](int index) {
	if (index < 0 || index >= size)
	{
		cout << "Out of range" << endl;
		_getch();
		exit(1);
	}
	return arr[index];
}

// index operator get
int& Array::operator[](int index) const{
	if (index < 0 || index >= size)
	{
		cout << "Out of range" << endl;
		_getch();
		exit(1);
	}
	return arr[index];
}

ostream& operator<<(ostream& output, const Array& array) {
	for (size_t i = 0; i < array.size; i++)
	{
		output << setw(3) << left << array.arr[i];
	}
	output << endl;
	return output;
}

istream& operator>>(istream& input, const Array& array) {
	for (size_t i = 0; i < array.size; i++)
	{
		input>>array.arr[i];
	}
	return input;
}

