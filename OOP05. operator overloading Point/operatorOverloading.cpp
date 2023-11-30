#include<iostream>
#define SQR(x) (x)*(x)

using namespace std;

class Point {
	double x;
	double y;
	static Point add(const Point& point1, const Point& point2) {
		return Point(point1.x + point2.x, point1.y + point2.y);
	}
	static double length(const Point& point) {
		return sqrt(SQR(point.x) + SQR(point.y));
	}

public:	
	Point(double x, double y) 
		: x{ x }, y{ y }
	{}
	void show()const {
		cout << "Point (" << x << ", " << y << ")" << endl;
	}
	friend Point operator+(const Point& point1, const Point& point2);
	friend double operator-(const Point& point1, const Point& point2);
	friend Point operator*(const Point& point, double value);
	friend Point operator*(double value, const Point& point);

	// operator unary -
	const Point operator-() {
		return Point(-x, -y);
	}

	// prefix increment
	Point& operator++() {
		++x;
		++y;
		return *this;
	}

	// prefix increment
	Point& operator--() {
		--x;
		--y;
		return *this;
	}

	// postfix increment
	const Point operator++(int) {
		Point point{ x, y };
		++(*this);
		return point;
	}

	// postfix increment
	const Point operator--(int) {
		Point point{ x, y };
		--(*this);
		return point;
	}

	// comparision operators
	friend bool operator==(const Point& point1, const Point& point2);
	friend bool operator!=(const Point& point1, const Point& point2);
	friend bool operator>(const Point& point1, const Point& point2);
	friend bool operator<(const Point& point1, const Point& point2);

	// input and output operators
	friend ostream& operator<<(ostream& output, const Point& point);
	friend istream& operator>>(istream& input, Point& point);
};

Point operator+(const Point& point1, const Point& point2) {
	return Point::add(point1, point2);
}


// operator binary -
double operator-(const Point& point1, const Point& point2) {
	return sqrt(SQR(point2.x - point1.x) + SQR(point2.y - point1.y));
}

Point operator*(const Point& point, double value) {
	return Point(point.x * value, point.y * value);
}

Point operator*(double value, const Point& point) {
	return Point(point.x * value, point.y * value);
}

bool operator==(const Point& point1, const Point& point2) {
	return point1.x == point2.x && point1.y == point2.y;
}
bool operator!=(const Point& point1, const Point& point2) {
	return !(point1.x == point2.x && point1.y == point2.y);
}
bool operator>(const Point& point1, const Point& point2) {
	return Point::length(point1) > Point::length(point2);
}
bool operator<(const Point& point1, const Point& point2) {
	return Point::length(point1) < Point::length(point2);
}


// input and output operators
ostream& operator<<(ostream& output, const Point& point) {
	output << "Point (" << point.x << ", " << point.y << ")";
	return output;
}
istream& operator>>(istream& input, Point& point) {
	input >> point.x;
	input.ignore(1);
	input >> point.y;
	return input;
}


int main() {
	Point point1(2, 5);
	Point point2(5, 3);
	//Point point3 = point1 + point2;
	//point3.show();
	//cout << point1 - point2 << endl;
	//Point point4 = -point1;
	//point4.show();

	/*Point multPoint = point1 * 2.5;
	Point multPoint1 = 2.5 * point1;*/
	
	/*Point inc = point1++;
	inc.show();
	point1.show();*/
	
	/*Point dec = multPoint--;
	multPoint.show();*/
	
	/*cout << boolalpha << (point1 != point2) << endl;*/

	/*cout << point1 << endl;
	cout << point2 << endl;*/

	cin >> point1;
	cout << point1 << endl;
}