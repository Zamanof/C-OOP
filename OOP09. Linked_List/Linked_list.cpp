#include<iostream>
#include "LinkedList.h"

using namespace std;
void change(Node<int>* ptr) {
	ptr->value *= 10;
}

int main() {
	srand(time(NULL));
	/*
	Data structure:
		Static data structures:
			- Static Array
		Dynamic data structures:
			- Dynamic Array
			- List (Linked, Double Linked)
			- Stack LIFO
			- Queue FIFO
			- Trees
			- Graphs
			- Hash tables

	*/

#pragma region Static array
	/*const int length = 5;
	int array[length]{ 2, 6, 9, 5, 6 };
	cout << array[0] << endl;*/
#pragma endregion

#pragma region Dynamic array
	/*int l = 4;
	int* dynamicArray = new int[l] {2, 98, 6, 62, 88};
	cout << dynamicArray[3] << endl;*/
#pragma endregion

	

#pragma region Linked List
	/*LinkedList<int> list;
	list.add(5);
	list.add(25);
	list.add(-15);
	list.add(-256);

	list.print();

	auto find = list.find(-15);
	if (find != nullptr) {
		find->value = 2346;
	}
	else {
		cout << "Not found" << endl;
	}

	list.print();

	list.removeAfter(find);
	list.print();

	list.addAfter(27, find);
	list.print();

	list.clear();
	list.print();

	list.addAfter(22, find);
	list.print();

	for (size_t i = 0; i < 10; i++)
	{
		list.add(rand() % 90 + 10);
	}
	list.print();
	list.doForEach(change);
	list.print();*/
	/*LinkedList<int>::printNode(list.head);*/


	/*LinkedList<string> names;
	names.add("Nadir");
	names.add("Lyaman");
	names.add("Camal");
	names.add("Murad");
	names.add("Xalid");
	names.add("Ali");
	names.add("Faiq");
	names.add("Emil");
	names.add("Yusif");
	names.add("Ruslan");
	names.add("Elbey");
	names.add("Valiyev Ali");
	names.add("Xanbaba");
	names.add("Rzayev Murad");
	names.add("Faxri");
	names.add("Ayxan");

	names.print();
	for (size_t i = 0; i < 8; i++)
	{
		names.remove();
	}
	names.print();
	auto findName = names.find("Yusif");
	if (findName == nullptr) {
		cout << "Not found" << endl;
	}*/
	
	
#pragma endregion

}