#include<iostream>

using namespace std;

int main() {
	string name = "Nadir";
	/*
	cout << name << endl;
	cin >> name;
	cout << name << endl;*/

	string word;
	/*cout << sizeof(word) << endl;*/
	/*cout << word.length() << endl;
	cout << word.capacity() << endl;
	cout << word.size() << endl;*/
	/*char symbol = 'A';
	
	for (size_t i = 0; i < 100; i++)
	{
		cout <<"capcity = "<< word.capacity() << endl;
		cout <<"length = "<< word.length() << endl;
		cout <<"size = "<< word.size() << endl;
		cout << '\n';
		word += symbol++;
	}
	cout << word << endl;*/

	//word = "InternasionalizmInternasionalizmInternasionalizmInternasionalizm";
	//cout << word.length() << endl;		// dlina stroki
	//cout << word.capacity() << endl;	// videlennoye mesto pod string

	//cout << '\n';

	//word = "Internasionalizm";
	//word.shrink_to_fit(); // umenshayet capacity do minimalno vazmojnoqo
	//cout << word.length() << endl;
	//cout << word.capacity() << endl;
	//cout << '\n';

	/*string str(25, '_');
	cout << string(50,'*') << endl;*/

	string surname = "Zamanov";

	cout << surname.at(2) << endl;
	cout << surname[2] << endl;
	
	/*surname.clear();*/
	


}