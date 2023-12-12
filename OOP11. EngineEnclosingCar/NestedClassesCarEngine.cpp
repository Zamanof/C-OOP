#include<iostream>

using namespace std;

class Car {
private:
	string model;
	int releaseYear;
	
	class Engine {
	private:
		bool isWorked;
		int horsePower;
		int cylinders;
	public:
		
		Engine(int horsePower, int cylinders)
			:horsePower(horsePower), cylinders(cylinders)
		{
			isWorked = false;
		}
		void start() {
			isWorked = true;
			cout << "Brrrrrr vnnnnn" << endl;

		}
	};
	Engine* engine;
public:
	Car(string model, int releaseYear, int horsePower, int cylinders):
		model(model), releaseYear(releaseYear)
	{
		engine = new Engine(horsePower, cylinders);
		cout << "Supper mupper pupper car created" << endl;
	}
	void move() {
		engine->start();
		cout << "Poyexaliii..." << endl;
	}
	~Car()
	{
		delete engine;
	}
};

int main()
{
	Car optimusPrime("Freightliner", 1984, 30000, 18);
	optimusPrime.move();
}