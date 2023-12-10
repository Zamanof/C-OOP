#include<iostream>
#include"MyStack.h"

using namespace std;

int main() {
	MyStack<int> stack(5);
	cout << boolalpha <<"empty = " << stack.empty() << endl;
	cout << boolalpha <<"size = " << stack.size() << endl;
	cout << stack.top() << endl;
	for (size_t i = 0; i < 10; i++)
	{
		stack.push(i + 1);
	}
	stack.push(1523);
	cout << boolalpha << "empty = " << stack.empty() << endl;
	cout << boolalpha << "size = " << stack.size() << endl;
	
	/*cout << stack.top() << endl;*/

	while (!stack.empty())
	{
		cout << stack.top() << endl;
		stack.pop();
	}
	cout << boolalpha << "empty = " << stack.empty() << endl;
	cout << boolalpha << "size = " << stack.size() << endl;

}