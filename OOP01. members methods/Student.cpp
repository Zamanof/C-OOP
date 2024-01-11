#include<iostream>
#include"Student.h"
using namespace std;

void Student::info() {
	cout << "name:\t\t" << name << endl;
	cout << "surname:\t" << surname << endl;
	cout << "age:\t\t" << age << endl;
	cout << "Marks:" << endl;
	for (size_t i = 0; i < 5; i++)
	{
		cout << marks[i] << ' ';
	}
	cout << '\n';
	cout << "Average: " << average() << endl;
	cout << "\n\n";
}

double Student::average() {
	double sum = 0;
	for (size_t i = 0; i < 5; i++)
	{
		sum += marks[i];
	}
	return sum / 5;
}