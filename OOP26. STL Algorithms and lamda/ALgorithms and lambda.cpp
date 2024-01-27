#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

template<class T>
void show(vector<T> vec);

class Randint {
	int start;
	int end;
public:
	Randint(int start, int end)
		: start(start), end(end)
	{	}
	int operator()() {
		return rand() % (end - start + 1) + start;
	}
};

bool isEven(int number) {
	return number % 2 == 0;
}

int main() {
	srand(time(NULL));
	vector<int> numbers(20);
	generate_n(numbers.begin(), numbers.size(), Randint(10, 99));
	show(numbers);
	vector<int>even_numbers;
	/*copy_if(
		numbers.begin(),
		numbers.end(),
		back_inserter(even_numbers),
		isEven);*/

	// lambda expressions - anonymous functions
	// [](){}
	/*copy_if(
		numbers.begin(),
		numbers.end(),
		back_inserter(even_numbers),
		[](int num) {return num % 2 == 0;});
	show(even_numbers);
	for_each(even_numbers.begin(), even_numbers.end(), [](int& numb) {numb *= 10; });
	show(even_numbers);*/

	string hello = "Goodbye Lenin";
	/*auto upr_text = (char*)hello.c_str();
	_strupr_s(upr_text, hello.size()+1);
	hello = string(upr_text);*/
	for_each(hello.begin(), hello.end(), [](char& chr) {chr = toupper(chr); });

	cout << hello << endl;

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