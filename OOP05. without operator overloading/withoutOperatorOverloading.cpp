#include<iostream>
#define SQR(x) (x)*(x)

using namespace std;

class Point {
	int x;
	int y;
public:
	Point(int x, int y) : x{ x }, y{y}
	{}
	void show()const {
		cout << "Point (" << x << ", " << y<<")"<< endl;
	}
	static bool isEqual(const Point& point1, const Point& point2) {
		return point1.x == point2.x && point1.y == point2.y;
	}
	static Point add(const Point& point1, const Point& point2) {
		return Point(point1.x + point2.x, point1.y + point2.y);
	}
	static Point mult(const Point& point1, double value) {
		return Point(point1.x * value, point1.y *value);
	}
	static double distance(const Point& point1, const Point& point2) {
		return sqrt(SQR(point2.x - point1.x) + SQR(point2.y - point1.y));
	}
};

int main() {

	string a = "Salam";
	string b = "Aleykum";
	cout << a + b << endl;
	Point point1(2, 5);
	Point point2(5, 3);
	// point1 - point2;
	cout << Point::distance(point1, point2) << endl;
	
	// point1 == point2
	cout << boolalpha << Point::isEqual(point1, point2) << endl;
	Point point3 = Point::add(point1, point2);
	
	// point1 + point2
	point3.show();

	// point1 * 2
	Point point4 = Point::mult(point1, 2);
	point4.show();
	
}