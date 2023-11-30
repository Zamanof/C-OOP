#pragma once
#include<iostream>

using namespace std;

class Array
{
private:
	int size;
	int* arr;
	friend ostream& operator<<(ostream&, const Array&);
	friend istream& operator>>(istream&, const Array&);
public:
	explicit Array(int = 10);
	Array(const Array&);

	~Array();

	int length() const;

	const Array& operator=(const Array&);
	bool operator==(const Array&) const;
	bool operator!=(const Array&) const;
	int& operator[](int);
	int& operator[](int) const;
};

