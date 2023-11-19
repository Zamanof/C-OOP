#include<iostream>
#include"Student.h"

using namespace std;

int main() {
	// this

	Student student1("Ali", "Aliyev", 25);
	Student student2("Vali", "Valiyev", 98);
	Student student3("Pirvali", "Pirvaliyev", 144);
	student1.show();
	student2.show();
	student3.show();
}