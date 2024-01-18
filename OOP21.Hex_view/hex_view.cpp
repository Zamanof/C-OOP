#include<iostream>
#include<fstream>
#include<iomanip>
#include<conio.h>

using namespace std;

#define MAX_PATH 255
#define NUMB_COLS 18
#define NUMB_ROWS 150

void main() {
	char path[MAX_PATH];

	cout << "Input path to file: ";
	cin.getline(path, MAX_PATH);

	int counter{}, i{}, j{};
	char text[NUMB_COLS];

	ifstream input(path, ios::in | ios::binary);

	if (!input) {
		cout << "Cannot open file" << endl;
		return;
	}

	cout.setf(ios::uppercase);


	while (!input.eof()) {
		for (i = 0; (i < NUMB_COLS && !input.eof()); i++)
		{
			input.get(text[i]);
		}
		if (i < NUMB_COLS) {
			i--;
		}
		for ( j = 0; j < i; j++)
		{
			if ((unsigned)text[i] < 0x10) {
				cout << setw(2) << 0 << hex << (unsigned)text[j];
			}
			else {
				cout << setw(3) << hex << (unsigned)text[j];
			}
		}
		for (; j < NUMB_COLS; j++)
		{
			cout << "    ";
		}
		cout << '\t';

		for ( j = 0; j < i; j++)
		{
			if (text[j] > 31 && text[j] <= 255) {
				cout << text[j];
			}
			else {
				cout << '.';
			}
		}
		cout << '\n';
		if (++counter == NUMB_ROWS) {
			counter = 0;
			cout << "Press any key to continue... " << flush;
			_getch();
			cout << '\n';
		}

	}
	input.close();
}
