#pragma once
#include <iostream>

using namespace std;

template<class T>
class MyQueue 
{
	T* queuePtr;
	const int maxSize;
	int first;
	int next;
	bool over;
public:
	MyQueue(int size = 100);
	~MyQueue();
	void enqueue(const T& value);
	void dequeue();
	T& front() const;
	T& back() const;
	bool empty() const;
	bool full() const;
	int size() const;
};

template<class T>
MyQueue<T>::MyQueue(int size)
	:maxSize(size)
{
	queuePtr = new T[maxSize];
	first = 0;
	next = 0;
	over = false;
}

template<class T>
MyQueue<T>::~MyQueue() 
{
	delete[] queuePtr;
}

template<class T>
void MyQueue<T>::enqueue(const T& value) 
{
	if (full()) {
		cout << "Queue is full" << endl;
		return;
	}
	queuePtr[next++] = value;
	if (next == maxSize) {
		over = true;
		next = 0;
	}
}

template<class T>
void MyQueue<T>::dequeue()
{
	if (empty()) 
	{
		cout << "Queue is empty" << endl;
		return;
	}
	first++;
	if (first == maxSize) {
		over = true;
		first = 0;
	}
}

template<class T>
T& MyQueue<T>::front()const
{
	if (empty()) 
	{
		cout << "Queue is empty" << endl;
		T t;
		return t;
	}
	return queuePtr[first];
}

template<class T>
T& MyQueue<T>::back()const
{
	if (empty())
	{
		cout << "Queue is empty" << endl;
		T t;
		return t;
	}
	if(next == 0 && over)
	{
		return queuePtr[maxSize - 1];
	}
	return queuePtr[next - 1];
}

template<class T>
bool MyQueue<T>::empty() const
{
	return size() == 0;
}

template<class T>
bool MyQueue<T>::full() const
{
	return size() == maxSize;
}


template<class T>
int MyQueue<T>::size() const
{
	if (next > first)
	{
		return next - first;
	}
	else if (first > next) {
		return maxSize - (first - next);
	}
	else if(over)
	{
		return maxSize;
	}
	else {
		return 0;
	}
}