#include "DynamicArray.h"
#include<iostream>

using namespace std;

DynamicArray::DynamicArray() :DynamicArray(5)
{
	cout << "DynamicArray created with DynamicArray()" << endl;
}

DynamicArray::DynamicArray(int size)
	:array{new int[size]}, size{ size }
{
	cout << "DynamicArray created with DynamicArray(int size)" << endl;
}

// Copy constructor
DynamicArray::DynamicArray(DynamicArray& other)
	:array{new int[other.size]}, size{ other.size }
{
	for (size_t i = 0; i < size; i++)
	{
		array[i] = other.array[i];
	}

	cout << "DynamicArray created with copy constructor DynamicArray(DynamicArray& other)" << endl;
}


// Move constructor
DynamicArray::DynamicArray(DynamicArray&& other)
	:array{other.array}, size{ other.size }
{
	other.array = nullptr;
	other.size = 0;
	cout << "DynamicArray moved by DynamicArray(DynamicArray&& other)" << endl;
}

// Copy assign operator overloading
DynamicArray& DynamicArray::operator=(const DynamicArray& other) {
	if (!(this == &other)) {
		if (size != other.size) {
			delete[] array;
			array = new int[other.size];
		}
		size = other.size;

		int* dest{ array };
		int* src{ other.array };

		int* const end{ array + size };
		while (dest < src)
		{
			*dest++ = *src++;
		}
	}
	cout << "DynamicArray copy with assign operator" << endl;
	return *this;
}

// Move assign operator overloading
DynamicArray& DynamicArray::operator=(DynamicArray&& other) {
	if (!(this == &other)) {
		delete array;
		array = other.array;
		size = other.size;
		other.array = nullptr;
		other.size = 0;
	}
	cout << "DynamicArray move with assign operator" << endl;
	return *this;
}

DynamicArray::~DynamicArray()
{
	cout << "DynamicArray destructed" << endl;
	delete[] array;
}

void DynamicArray::show()
{
	for (size_t i = 0; i < size; i++)
	{
		cout << array[i] << ' ';
	}
	cout << '\n';
}

void DynamicArray::randomize()
{
	srand(time(NULL));
	for (size_t i = 0; i < size; i++)
	{
		array[i] = rand() % 90 + 10;
	}
}

int DynamicArray::getElement(int index) {
	return array[index];
}

void DynamicArray::setElement(int index, int value) {
	array[index] = value;
}
