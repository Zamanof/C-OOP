#include<iostream>

using namespace std;

#pragma region class without constructor delegation
//class Person {
//	char* name;
//	int age;
//	int socialId;
//public:
//	Person()
//		:name{ nullptr }, age{ 0 }, socialId{ 0 }
//	{
//		cout << "Person constrcuted with Person()" << endl;
//	}
//	Person(const char* name)
//		:name{ new char[strlen(name) + 1] },
//		age{ 0 },
//		socialId{ 0 }
//	{
//		strcpy_s(this->name, strlen(name) + 1, name);
//		cout << "Person constrcuted with Person(const char* name)" << endl;
//	}
//	Person(const char* name, int age)
//		:name{ new char[strlen(name) + 1] },
//		age{ age },
//		socialId{ 0 }
//	{
//		strcpy_s(this->name, strlen(name) + 1, name);
//		cout << "Person constrcuted with Person(const char* name, int age)" << endl;
//	}
//	Person(const char* name , int age, int socialId)
//		:name{ new char[strlen(name) + 1] },
//		age{ age },
//		socialId{ socialId }
//	{
//		strcpy_s(this->name, strlen(name) + 1, name);
//		cout << "Person constrcuted with Person(const char* name, int age, int socialId)" << endl;
//	}
//
//void show() {
//	if (name) {
//		cout << "Name: " << name << endl;
//	}
//	else {
//		cout << "Name: Empty" << endl;
//	}
//	cout << "Age: " << age << endl;
//	cout << "Id: " << socialId << endl;
//	cout << "_____________________________\n" << endl;
//}
//
//~Person()
//{
//	if (name) cout << "Person " << name << " destructed" << endl;
//	else cout << "Person Empty destructed" << endl;
//	delete[] name;
//}
//};
#pragma endregion

#pragma region class with constructor delegation
class Person {
	char* name;
	int age;
	int socialId;
public:
	Person(const char* name, int age, int socialId)
		:name{ name ? new char[strlen(name) + 1] : nullptr },
		age{ age },
		socialId{ socialId }
	{
		if (name)
		{
			strcpy_s(this->name, strlen(name) + 1, name);
		}

		cout << "Person constrcuted with Person(const char* name, int age, int socialId)" << endl;
	}

	Person() :Person(nullptr, 0, 0)
	{
		cout << "Person constrcuted with Person()" << endl;
	}

	Person(const char* name)
		:Person(name, 0, 0)
	{
		cout << "Person constrcuted with Person(const char* name)" << endl;
	}

	Person(const char* name, int age)
		:Person(name, age, 0)
	{
		cout << "Person constrcuted with Person(const char* name, int age)" << endl;
	}

	void show() {
		if (name) {
			cout << "Name: " << name << endl;
		}
		else {
			cout << "Name: Empty" << endl;
		}
		cout << "Age: " << age << endl;
		cout << "Id: " << socialId << endl;
		cout << "_____________________________\n"<< endl;
	}

	~Person()
	{
		if (name) cout << "Person "<< name << " destructed" << endl;
		else cout << "Person Empty destructed" << endl;
		delete[] name;
	}
};
#pragma endregion



int main() {
	Person person;
	person.show();
	
	Person person1("Nadir");
	person1.show();
	
	Person person2("Salam", 42);
	person2.show();
	
	Person person3("Namiq", 12, 3);
	person3.show();
}