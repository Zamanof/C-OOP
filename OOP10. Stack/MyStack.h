#pragma once
#include<iostream>

using namespace std; 

template <class T>
class MyStack {
private:
	T* stackPtr;
	const int maxSize;
	int current;
public:
	MyStack(int size = 100);
	~MyStack();
	void push(const T& value);
	void pop();
	T& top();
	bool empty() const;
	int size() const;
};

template<class T>
MyStack<T>::MyStack(int size)
	:maxSize(size)
{
	stackPtr = new T[maxSize];
	current = -1;
}

template<class T>
MyStack<T>::~MyStack() {
	delete[] stackPtr;
}

template<class T>
void MyStack<T>::push(const T& value)
{
	if (current >= maxSize - 1) {
		cout << "Stack is overflow" << endl;
		return;
	}
	stackPtr[++current] = value;
}

template<class T>
void MyStack<T>::pop() {
	if (empty())
	{
		cout << "Stack is empty" << endl;
		return;
	}
	current--;
}

template<class T>
T& MyStack<T>::top()
{
	if (empty()) {
		cout << "Stack is empty" << endl;
		T t;
		return t;
	}
	return stackPtr[current];
}

template<class T>
bool MyStack < T>::empty() const 
{
	return current < 0;
}

template<class T>
int MyStack<T>::size() const 
{
	return current + 1;
}