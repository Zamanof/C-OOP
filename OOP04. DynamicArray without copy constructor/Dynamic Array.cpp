#include <iostream>

using namespace std;

class DynamicArray {
	int* arr;
	int size;
public:
	DynamicArray(int size)
		:arr{ new int[size] }, size{size}
	{
		cout << "Dynamic array constructed for "
			<<size<< " elements for " << this << endl;
	}
	DynamicArray(): DynamicArray(5) {}
	// shallow copy
	DynamicArray(const DynamicArray& array)
		:arr{ array.arr }, size{array.size}
	{
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
			<< size << "elements for" << this << endl;
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

void Foo(DynamicArray array) {

}

int main() {
	srand(time(NULL));
	DynamicArray arr1{ 10 };
	arr1.randomize();
	arr1.show();
	Foo(arr1);
	/*DynamicArray arr2{ arr1 };
	arr2.show();
	arr2.setElement(3, 26);
	arr1.show();*/

}