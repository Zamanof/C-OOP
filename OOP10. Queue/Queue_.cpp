#include<iostream>
#include"MyQueue.h"

using namespace std;

template<class T>
void printSize(const MyQueue<T>& queue)
{
	cout << "size = " << queue.size() << endl;
	cout <<boolalpha<< "empty = " << queue.empty() << endl;
	cout <<boolalpha<< "full = " << queue.full() << endl;
	cout << endl;
}

int main()
{
	srand(time(NULL));
	MyQueue<int> queue(10);
	printSize(queue);
	
	for (size_t i = 0; i < 5; i++)
	{
		queue.enqueue(rand() % 90 + 10);
		cout << queue.back() << endl;
	}
	cout << endl;
	printSize(queue);

	for (size_t i = 5; i < 10; i++)
	{
		queue.enqueue(rand() % 90 + 10); 
		cout << queue.back() << endl;
	}
	cout << endl;
	printSize(queue);

	for (size_t i = 0; i < 5; i++)
	{
		cout << queue.front() << endl;
		queue.dequeue();
	}
	cout << endl;
	printSize(queue);

	for (size_t i = 5; i < 10; i++)
	{
		cout << queue.front() << endl;
		queue.dequeue();
	}
	cout << endl;
	printSize(queue);

}