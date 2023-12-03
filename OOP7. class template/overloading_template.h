#pragma once
#include<iostream>

using namespace std;

int add(int, int);

float add(float, float);

float add(int, float);

float add(float, int);

int add(int, int, int);

template <class T>
void foo(T a, T b) {
	cout << typeid(a).name() << ' ';
	cout << typeid(b).name() << endl;
}

template<class T1, class T2>
T1 bar(T2 a, T2 b) {
	return a + b;
}


