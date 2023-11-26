#include<iostream>

using namespace std;

class Fraction {
private:
	int numerator;
	int denominator;
public:
	Fraction(int numerator, int denominator)
		:numerator{ numerator }, denominator{denominator}
	{
		cout << "Fraction constructed for " << this << endl;
	}
	Fraction() : Fraction(1, 1) {}

	// copy constructor
	Fraction(const Fraction& fraction) 
		:numerator{ fraction.numerator }, denominator{fraction.denominator}
	{
		cout << "Fraction copy constructed for " << this << endl;
	}

	~Fraction()
	{
		cout << "Fraction destructed for " << this << endl;
	}
	void show() {
		cout << numerator << "/" << denominator << endl;
	}
};

int main() {
	// copy constructor
	Fraction first{ 2, 3 };

	Fraction second{ first };
	
	
	/*cout << "first = ";
	first.show();
	cout << "second = ";
	second.show();*/
}