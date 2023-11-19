#include<iostream>

using namespace std;

class Some {
private:
	int* array;
	int length;
public:
	// constructor - vizivaetsya pri sozdanii obyekta
	Some() {
		length = 0;
		array = nullptr;
	}
	Some(int length) {
		this->length = length;
		array = new int[this->length] {};
	}
	void show() {
		if (array != nullptr) {
			for (size_t i = 0; i < length; i++)
			{
				cout << array[i] << ' ';
			}
			cout << '\n';
		}
		else
		{
			cout << "Array not initialized" << endl;
		}

	}
	// destructor - vizivaetsya pri smerti obyekta

	~Some() {
		/*cout << "Destructor called" << endl;*/
		delete[] array;
	}
};

int main() {
	/*Some some1;
	Some some2(5);
	some1.show();
	some2.show();*/
	/*while (true)
	{
		Some some(2500);
	}*/
	Some some;

}