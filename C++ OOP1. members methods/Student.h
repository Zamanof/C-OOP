#pragma once
class Student {
public:
	char name[30];
	char surname[30];
	int age;
	double marks[5];

	// methods - member functions
	void info();

private:
	double average();
};
