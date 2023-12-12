#include<iostream>

using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int x, int y) : x(x), y(y)
	{
		cout << "Point(" << x << ", " << y << ") was created" << endl;
	}
	~Point()
	{
		cout << "Point(" << x << ", " << y << ") was deleted" << endl;
	}
	void change(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
};

class Image
{
private:
	string name;
	int width;
	int height;
	Point position;
public:
	Image(string name, int width, int height, int x, int y)
		:name(name), width(width), height(height), position(Point(x, y))
	{
		cout << "Image " << name << ".jpeg was created" << endl;
	}
	~Image()
	{
		cout << "Image " << name << ".jpeg was deleted" << endl;
	}

	void moveTo(int x, int y)
	{
		cout << "Image " << name << ".jpeg was moved to point (" << x << ", " << y << ")" << endl;
		position.change(x, y);
	}
};


int main() {
	// relations - otnosheniya
	// is - Yavlyaetsya (odin iz raznovidnostey) : Inheritance (nasledovaniye)
	// has - imeet (soderjit) - Aggregation, Composition
	// depends on - zavisit ot
	// uses - ispolzuyetsya
	// part-whole - chast-seloye : Nested classes (vlojenniye class-i)

	// Composition
	// 1. obyekt chast vxodit v sostav obyekt seloe
	// 2. obyekt chast mojet prinadlejat tolko odnomu obyektu-selomu
	// 3. obyekt chast ne sushestvuyet bez obyekta seloqo, Obyekt seloye upravlyayet chastyu i nesyot otvestvennost za sushestvovaniya chasti
	// 4. obyekt chast ne soderjit informasiyu ob obyekte selom

	Image image1("Mojno Lizu?", 53, 76, 0, 0);
	Image image2("Black triangle", 100, 100, 15, 36);

}
