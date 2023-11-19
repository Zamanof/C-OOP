#pragma once
#include<iostream>

using namespace std;
class Student
{
private:
	char _name[50];
	char _surname[50];
	int _age;

public:

	Student() {
		strcpy_s(_name, 20, "empty");
		strcpy_s(_surname, 20, "empty");
		_age = 0;
		cout << "object is constructed default constructor" << endl;
	}

	Student(const char* name, const char* surname, int age) {
		if (strlen(name) < 3) {
			cout << "Name length must be 3 symbol or more" << endl;
			strcpy_s(_name, 20, "empty");
		}
		else {
			strcpy_s(_name, 20, name);
		}
		if (strlen(surname) < 3) {
			cout << "Last name length must be 3 symbol or more" << endl;
			strcpy_s(_surname, 20, "empty");
		}
		else {
			strcpy_s(_surname, 20, surname);
		}

		if (age >= 0) {
			_age = age;
		}
		else
		{
			cout << "incorrect value for age" << endl;
			_age = 0;
		}
		cout << "Object is constructed constructor with parameters" << endl;
	}

	Student(int age) {
		strcpy_s(_name, 20, "Empty");
		strcpy_s(_surname, 20, "Empty");

		if (age >= 0) {
			_age = age;
		}
		else
		{
			cout << "incorrect value for age" << endl;
			_age = 0;
		}
		cout << "Object is constructed constructor with one parameter" << endl;
	}


	void show();

	/*void set_name(const char*);*/
	char* get_name();

	void set_surname(const char*);
	char* get_surname();

	void set_age(int age);
	int get_age();
};

