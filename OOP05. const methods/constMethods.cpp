#include<iostream>

using namespace std;

// const methods
class Date
{
private:
	int day;
	int month;
	int year;
public:
	void setDay(int value) {
		day = value;
	}
	int  getDay() const  {
		return day;
	}

};


int main() {

	Date date;
	int a = 5;
	date.setDay(a);
	cout << date.getDay() << endl;
	return 0;

}