#include<iostream>

using namespace std;

class Point {
public:
	int x;
	int y;
	static int count;
	Point() :x{ 0 }, y{ 0 } {
		count++;
	}
	void showXY() {
		cout << "Point(x=" << x << ", y=" << y <<")" << endl;
	}
	static void show() {
		cout << count << endl;
	}
};
int Point::count{};

int main() {
	Point point;	
	Point point1;
	Point point2;
	Point point3;
	/*cout << &point.x << endl;
	cout << &point1.x << endl;
	cout << &point2.x << endl;
	cout << &point3.x << endl;*/

	cout << &point.count << endl;
	cout << &point1.count << endl;
	cout << &point2.count << endl;
	cout << &point3.count << endl;
	cout << &Point::count << endl;

}