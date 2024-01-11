#pragma once
class Student
{
private:
	char _name[50];
	char _surname[50];
	int _age;

public:
	void show();
	void initialize(const char*, const char*, int);
	
	/*void set_name(const char*);*/
	char* get_name();
	
	void set_surname(const char*);
	char* get_surname();
	
	void set_age(int age);
	int get_age();
};

