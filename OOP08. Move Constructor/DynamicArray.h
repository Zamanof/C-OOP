#pragma once
class DynamicArray
{
private:
	int* array;
	int size;
public:
	DynamicArray();
	DynamicArray(int);

	// Copy constructor
	DynamicArray(DynamicArray&);
	
	// Move constructor
	DynamicArray(DynamicArray&&);

	// Copy assign operator
	DynamicArray& operator=(const DynamicArray&);

	// Move assign operator
	DynamicArray& operator=(DynamicArray&& other);

	// Destructor
	~DynamicArray();

	int getElement(int);
	void setElement(int, int);

	void show();
	void randomize();


};

