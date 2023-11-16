#include<iostream>
#include"Student.h"
#include"Human.h"

using namespace std;

int main() {
	Student student1 = { "Ali", "Valiyev", 18, {10, 12, 11, 8, 12} };
	Student student2 = { "Ali", "Bayramov", 15, {11, 10, 9, 8, 12} };
	student1.info();
	student2.info();
	Human human{ "Nadir", "Zamanov", 42 };
	human.info();

}
