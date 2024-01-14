#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

enum {
	CHOICE = 3,
	INPUT_FILENAME,
	INPUT_DIMENSION,
	INPUT_ELEMENTS,
	FILE_ERROR
};


void main() {
	char answer;
	const int MENU_COUNT = 8;
	int i{}, j{};
	char Menu[MENU_COUNT][50] =
	{
		"1. Read data from file\n",
		"2. Write data in file\n",
		"3. Exit\n",
		"Your choice\n",
		"Enter file name\n",
		"Enter array size\n",
		"Enter array element\n",
		"File can not open\n"

	};

	do
	{
		for (size_t i = 0; i < 4; i++)
		{
			cout << Menu[i];
		}
		cin >> answer;
		system("cls");
	} while (answer < '1' || answer >'3');

	if (answer == '3') return;

	string FileName;
	int M{}, N{};

	int number{};

	cout << '\n' << Menu[INPUT_FILENAME];
	cin >> FileName;
	ifstream inFile(FileName, ios::in | ios::_Nocreate);
	switch (answer)
	{
	case '1':
		if (!inFile)
		{
			cout << Menu[FILE_ERROR];
			return;
		}
		inFile >> M;
		inFile >> N;

		for (i = 0; i < M; i++)
		{
			for (j = 0; j < N; j++)
			{
				inFile >> number;
				cout << setw(6) << number;
			}
			cout << '\n';
		}
		inFile.close();
		break;
	case '2':
		ofstream outFile(FileName, ios::out);
		if (!outFile) {
			cout << Menu[FILE_ERROR];
			return;
		}

		cout << Menu[INPUT_DIMENSION];
		cout << "M: ";
		cin >> M;
		cout << "N: ";
		cin >> N;

		outFile << M << ' ' << N << '\n';
		cout << Menu[INPUT_ELEMENTS];
		for (i = 0; i < M; i++)
		{
			for (j = 0; j < N; j++)
			{
				cout << "Array[" << i << "][" << j << "] =";
				cin >> number;
				outFile << number << ' ';
			}
			outFile << '\n';
		}
		outFile.close();
		break;
	}
}