#include<iostream>
#define SQR(x) (x)*(x)

using namespace std;

class Point {
	int x;
	int y;
	static Point add(const Point& point1, const Point& point2) {
		return Point(point1.x + point2.x, point1.y + point2.y);
	}
public:
	Point(int x, int y) 
		: x{ x }, y{ y }
	{}
	void show()const {
		cout << "Point (" << x << ", " << y << ")" << endl;
	}
	friend Point operator+(const Point& point1, const Point& point2);
	friend double operator-(const Point& point1, const Point& point2);
	
	// operator unary -
	const Point operator-() {
		return Point(-x, -y);
	}
};

Point operator+(const Point& point1, const Point& point2) {
	return Point::add(point1, point2);
}
// operator binary -
double operator-(const Point& point1, const Point& point2) {
	return sqrt(SQR(point2.x - point1.x) + SQR(point2.y - point1.y));
}




int main() {
	Point point1(2, 5);
	Point point2(5, 3);

	Point point3 = point1 + point2;
	point3.show();
	cout << point1 - point2 << endl;
	Point point4 = -point1;
	point4.show();
	
}