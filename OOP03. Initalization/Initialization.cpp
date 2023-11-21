#include<iostream>

using namespace std;
class Point
{
public:
	int x;
	int y;
	// initialize list
	Point() : x{ 0 }, y{ 0 }
	{
		/*x = 0;
		y = 0;*/
		cout << "(Point) parameterless" << endl;
	}

	Point(int x, int y) :x{ x }, y{ y }
	{
		cout << "(Point) with parameteres" << endl;
	}
	void show() {
		cout << "Point(x=" << x << ", y=" << y << ")" << endl;
	}
};

class Rectangle
{
public:
	Point leftUpperCorner;
	int width;
	int height;

	Rectangle() : width{ 0 }, height{ 0 }, leftUpperCorner{ 0, 0 }
	{
		cout << "(Rectangle) parameterless" << endl;
	}
	Rectangle(int x, int y, int width, int height)
		: width{ width }, height{ height }, leftUpperCorner{ x, y }
	{
		cout << "(Rectangle) with parameteres" << endl;
	}

};



class Foo {
public:
	int a;
	const int number{45};
	Foo() : a{0} {}
	Foo(int number) : number{ number }, a{}
	{}
	int getNumber() {
		return number;
	}
	
private:
};


int main() {
	//int numb = 5;
	//int numb1{};	// Unifisirovannaya inisizalizasiya
	//int numb2(6);	// Pryamaya inisizalizasiya
	/*Point point;
	point.show();
	Point point1(5, 15);
	point1.show();*/

	/*Rectangle rectangle;*/

	Foo foo;
	cout << foo.getNumber() << endl;
	
	cout << foo.a << endl;
	Foo foo1(3648);
	cout << foo1.getNumber() << endl;
	cout << foo1.a << endl;

}