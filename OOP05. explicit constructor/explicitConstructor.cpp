#include<iostream>

using namespace std;

class Date {
	int day;
	int month;
	int year;

public:
	Date(int day, int month, int year)
		:day{ day }, month{ month }, year{year}
	{
		cout << "Constructor Date(int day, int month, int year)" << endl;
	}

	explicit Date(int year) : Date(1, 1, year)
	{
		cout << "Constructor Date(int day)" << endl;
	};
	friend void show(Date date);
};

void show(Date date) {
	cout << date.day << endl;
	cout << date.month << endl;
	cout << date.year << endl;
}

class Array {
	int size;
	int* array;
public:
	explicit Array(int size = 10) : size{ size }, array{new int[size]} {

	}
	~Array() {
		delete[] array;
	}
	int getSize() const {
		return size;
	}
	int getValue(int index) const {
		return array[index];
	}
	void setValue(int index, int value) {
		array[index] = value;
	}
	
	void showValue(int index) const {
		cout << array[index]<<' ';
	}

};



void show(const Array& array) {
	for (size_t i = 0; i < array.getSize(); i++)
	{
		array.showValue(i);
	}
	cout << '\n';
}

//Date baseDate() {
//	return 2023;
//}

int main() {
	/*Date date = { 28, 11, 2023 };
	Date date1(2023);
	show(date);
	int a = 2.5;
	int b = (int)2.5;*/
	/*Date date2 = 2020;
	show(date2);

	show(2023);*/
	/*srand(time(NULL));
	int size = 5;*/
	/*Array array(5);
	for (size_t i = 0; i < size; i++)
	{
		array.setValue(i, rand() % 90 + 10);
	}
	show(array);*/

	/*show(3);*/
	

}