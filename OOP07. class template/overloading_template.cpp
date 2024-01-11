#include "overloading_template.h"


int add(int a, int b) {
	return a + b;
}

float add(float a, float b) {
	return a + b;
}

float add(int a, float b) {
	return a + b;
}

float add(float a, int b) {
	return a + b;
}

int add(int a, int b, int c) {
	return a + b + c;
}



