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
	:name(string()), surname(string()), age(0)
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
	cout << "Age:\t\t" << age << endl;
	cout << "-----------------------------------" << endl;
}

void Human::SavetoFile() {
	fstream file("human.txt", ios::out | ios::binary | ios::app);
	if (!file) {
		cout << "File doesn't open for write!!!" << endl;
		exit(1);
	}
	int n = name.length(), s = surname.length();
	file.write((char*)&age, sizeof(age));
	file.write((char*)&n, sizeof(int));
	file.write(name.c_str(), n);
	file.write((char*)&s, sizeof(int));
	file.write(surname.c_str(), s);
	file.close();
	
}

void Human::ShowFromFile() {
	int t_age, n, s;
	string t_name, t_surname;
	char* name,* surname;
	fstream file("human.txt", ios::in | ios::binary);
	file.read((char*)&t_age, sizeof(age));
	file.read((char*)&n, sizeof(int));
	name = new char[n+1] {};
	file.read(name, n);
	file.read((char*)&s, sizeof(int));
	surname = new char[s+1] {};
	file.read(surname, s);

	file.close();
	t_name = string(name);
	t_surname = string(surname);
	cout << "Name:\t\t" << t_name << endl;
	cout << "Surname:\t" << t_surname << endl;
	cout << "Age:\t\t" << t_age << endl;
	cout << "-----------------------------------" << endl;
}
int main() {
	/*Human human1("Nadir", "Zamanov", 43);
	human1.SavetoFile();*/
	Human::ShowFromFile();
}