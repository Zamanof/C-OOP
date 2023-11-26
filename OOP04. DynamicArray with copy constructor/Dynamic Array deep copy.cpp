#include <iostream>

using namespace std;

class DynamicArray {
	int* arr;
	int size;
public:
	DynamicArray(int size)
		:arr{ new int[size] }, size{ size }
	{
		cout << "Dynamic array constructed for "
			<< size << " elements for " << this << endl;
	}

	DynamicArray() : DynamicArray(5) {}

	// deep copy
	DynamicArray(const DynamicArray& array)
		:arr{ new int[array.size]}, size{array.size}
	{
		for (size_t i = 0; i < array.size; i++)
		{
			arr[i] = array.arr[i];
		}
		cout << "Dynamic array copy constructed for "
			<< size << " elements for " << this << endl;
	}

	int getElement(int index)
	{
		return arr[index];
	}

	void setElement(int index, int value)
	{
		arr[index] = value;
	}

	void show();

	void randomize();

	~DynamicArray()
	{
		delete[] arr;
		cout << "Dynamic array destructed for "
			<< size << " elements for " << this << endl;
	}
};

void DynamicArray::show() {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void DynamicArray::randomize() {
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 90 + 10;
	}
}


void Foo(DynamicArray arr) {

}


int main() {
	srand(time(NULL));
	DynamicArray arr1{ 10 };
	arr1.randomize();
	cout << "Before change" << endl;
	cout << "arr1 -> ";
	arr1.show();

	Foo(arr1);

	/*DynamicArray arr2{ arr1 };
	cout << "arr2 -> ";
	arr2.show();
	cout << "After change" << endl;
	arr2.setElement(3, 26);
	cout << "arr1 -> ";
	arr1.show();
	cout << "arr2 -> ";
	arr2.show();*/

}