#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Cat {
public:
	string name;
	int age;
	int life;

	Cat(string name, int age, int life)
		: name(name), age(age), life(life)
	{}
	void show() const {
		cout << "Name:\t" << name << endl;
		cout << "Age:\t" << age << endl;
		cout << "Life:\t" << life << endl;
		cout << "\n\n";
	}
	bool operator==(const Cat& other) {
		return (name == other.name && age == other.age && life == other.life);
	}
	bool operator!=(const Cat& other) {
		return !(operator==(other));
	}
	bool operator>(const Cat& other) {
		return age > other.age;
	}
	bool operator>=(const Cat& other) {
		return age >= other.age;
	}
	bool operator<(const Cat& other) {
		return age < other.age;
	}
	bool operator<=(const Cat& other) {
		return age <= other.age;
	}
};

template<class T>
void show(vector<T> vec);

bool isPrime(int number);

bool isNegative(int number);
bool isEven(int number);
bool isOdd(int number);
bool age_compare(const Cat& left, const Cat& right) 
{
	return left.age < right.age;
}

bool life_compare(const Cat& left, const Cat& right)
{
	return left.life < right.life;
}

void make_negative(int& number) {
	if (number > 0)  number = -number;
}

void pow_2(int& number) {
	number *= number;
}
void cat_show(const Cat& cat) {
	cat.show();
}
int main() {
	// STL Algorithms

	vector<int> numbers{13, 26, 15, 18, -32, 61, -25};
	auto start = numbers.begin();
	auto end = numbers.end();
	show(numbers);

#pragma region find
	// find
	/*int numb{};
	cout << "Enter any number for search in vector: ";
	cin >> numb;

	auto result = find(start, end, numb);

	if (result != end)
	{
		cout << *result << " in this vector" << endl;
	}
	else
	{
		cout << numb << " is not found" << endl;
	}*/
#pragma endregion

#pragma region find_if
	/*for (size_t i = 1; i < 100; i++)
	{
		if (isPrime(i))
			cout << i << " is prime number" << endl;
	}*/
	/*auto result = find_if(start, end, isPrime);
	if (result != end)
	{
		cout << "One or more prime numbers in this vector" << endl;
	}
	else
	{
		cout << "prime numbers are not found in this vector" << endl;
	}*/
#pragma endregion

#pragma region copy
	/*vector<int> new_numbers;
	copy(numbers.begin(), numbers.end() - 3, back_inserter(new_numbers));
	show(new_numbers);*/

#pragma endregion

#pragma region copy_if
	//vector<int> prime_numbers{};
	//vector<int> negative_numbers{};
	//vector<int> even_numbers{};
	//vector<int> odd_numbers{};
	//copy_if(start, end, back_inserter(prime_numbers), isPrime);
	//copy_if(start, end, back_inserter(negative_numbers), isNegative);
	//copy_if(start, end, back_inserter(even_numbers), isEven);
	//copy_if(start, end, back_inserter(odd_numbers), isOdd);
	//show(prime_numbers);
	//show(negative_numbers);
	//show(even_numbers);
	//show(odd_numbers);

#pragma endregion

#pragma region max_element, min_element
	/*cout << *(max_element(start, end)) << endl;
	cout << *(min_element(start, end)) << endl;*/
#pragma endregion

	vector<Cat> cats{
			Cat("StepCat", 4, 8),
			Cat("Murka", 2, 5),
			Cat("Koshka", 10, 1),
			Cat("Matroskin", 5, 5),
			Cat("Puss in boots", 15, 1),
			Cat("Catus Julius Caesar", 150, 15),
			Cat("Begemot", 1500, 0),
			Cat("Mastan", 3, 10),
			Cat("Kak Proshliy raz", 4, 7)
	};
	/*auto max_cat = max_element(cats.begin(), cats.end(), life_compare);
	max_cat->show();
	auto min_cat = min_element(cats.begin(), cats.end(), life_compare);
	min_cat->show();*/

	/*sort(numbers.begin(), numbers.end());
	show(numbers);*/

	/*sort(cats.begin(), cats.end(), age_compare);
	for (auto cat : cats)
	{
		cat.show();
	}*/

	/*Cat cat ("Mastan", 3, 10);
	find(cats.begin(), cats.end(), cat)->show();*/
	/*sort(cats.begin(), cats.end());
	for (auto cat : cats)
	{
		cat.show();
	}*/

	/*for_each(numbers.begin(), numbers.end(), make_negative);
	show(numbers);
	for_each(numbers.begin(), numbers.end(), pow_2);
	show(numbers);*/

	for_each(cats.begin(), cats.end(), cat_show);
}

template<class T>
void show(vector<T> vec)
{
	for (auto item : vec)
	{
		cout << item << ' ';
	}
	cout << "\n\n";
}

bool isPrime(int number)
{
	if (number == 1) return true;

	for (size_t i = 2; i <= number / 2; i++)
	{
		if (number % i == 0) return false;
	}
	return true;
}

bool isNegative(int number)
{
	return number < 0;
}

bool isEven(int number) {
	return number % 2 == 0;
}
bool isOdd(int number) {
	return number % 2 != 0;
}