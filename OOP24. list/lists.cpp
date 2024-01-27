#include<iostream>
#include<list>

using namespace std;

template<class T>
void show_list(list<T> lst) {
	cout << "List: " << endl;
	for (T item : lst)
	{
		cout << item << ' ';
	}
	cout << endl;
	cout << "list front: " << lst.front() << endl;
	cout << "list back: " << lst.back() << endl;
	cout << endl;
}

int main() {
	list<int> lst;
	lst.push_back(36);
	lst.push_back(13);
	lst.push_back(55);
	lst.push_back(33);
	lst.push_back(33);
	lst.push_back(33);

	show_list(lst);
	lst.push_front(258);
	show_list(lst);

	list<int>::iterator iter = lst.begin();
	++iter;
	++iter;
	lst.insert(iter, 97);

	show_list(lst);
	lst.unique();
	lst.sort();
	show_list(lst);
}
