#include<iostream>
#include<fstream>

using namespace std;

class Human {
private:
	string name;
	string surname;
	int age;
public:
	Human();
	Human(string name, string surname, int age);

	void Put();
	void Show();
	void SavetoFile();
	static void ShowFromFile();
};

Human::Human()
	:name(""), surname(""), age(0)
{}

Human::Human(string name, string surname, int age)
	:name(name), surname(surname), age(age)
{}

void Human::Put() {
	cout << "Enter your name: " << endl;
	cin >> name;
	cout << "Enter your surname: " << endl;
	cin >> surname;
	cout << "Enter your age: " << endl;
	cin >> age;
}

void Human::Show() {
	cout << "Name:\t\t" << name << endl;
	cout << "Surname:\t" << surname << endl;
	cout << "Age:\t" << age << endl;
	cout << "-----------------------------------" << endl;
}

void Human::SavetoFile() {
	fstream file("human.txt", ios::out | ios::binary | ios::app);
	if (!file) {
		cout << "File doesn't open for write!!!" << endl;
		exit(1);
	}
	file.write((char*)&age, sizeof(age));
	file.write((char*)&name, sizeof(name));
	file.write((char*)&surname, sizeof(surname));
	
}

void Human::ShowFromFile() {
	int t_age;
	string t_name, t_surname;
	fstream file("human.txt", ios::in | ios::binary);
	file.read((char*)&t_age, sizeof(age));
	
	file.read((char*)&t_name, sizeof(name));
	file.read((char*)&t_surname, sizeof(surname));
	file.close();
	cout << "Name:\t\t" << t_name << endl;
	cout << "Surname:\t" << t_surname << endl;
	cout << "Age:\t" << t_age << endl;
	cout << "-----------------------------------" << endl;
}
int main() {
	/*Human human1("Nadir", "Zamanov", 43);
	fstream file("human.txt", ios::out | ios::binary);
	file.write((char*)&human1, sizeof(Human));
	file.close();*/

	fstream file2("human.txt", ios::in| ios::binary);
	Human human2;
	file2.read((char*)&human2, sizeof(Human));
	file2.close();
	human2.Show();

	cout << "Hi" << endl;
}