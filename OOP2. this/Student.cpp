#include "Student.h"
#include<iostream>

using namespace std;
void Student::show() {
	cout << "Name:\t\t" << name << endl;
	cout << "Last name:\t" << surname << endl;
	cout << "Age:\t\t" << age << endl;
}


//void Student::set_name(const char* name) {
//	if (strlen(name) < 3) {
//		cout << "Name length must be 3 symbol or more" << endl;
//	}
//	else {
//		strcpy_s(this->name, 20, name);
//	}
//}
char* Student::get_name() {
	return name;
}

void Student::set_surname(const char* surname) {
	if (strlen(surname) < 3) {
		cout << "Last name length must be 3 symbol or more" << endl;
	}
	else {
		strcpy_s(this->surname, 20, surname);
	}
}
char* Student::get_surname() {
	return surname;
}

void Student::set_age(int age) {
	if (age >= 0) {
		this->age = age;
	}
	else
	{
		cout << "incorrect value for age" << endl;
	}
}
int Student::get_age() {
	return age;
}



