#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

int randint(int start, int end) {
	return rand() % (end - start + 1) + start;
}

template <class T>
void show(const vector<T>& vec) {
	// proxod vectora s metodom at()
	/*for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << ' ';
	}
	cout << '\n';*/

	// proxod vectora s operatorom [] - index
	/*for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ' ';
	}
	cout << '\n';*/


	// proxod vectora s pomoshyu iteratorov
	
	for (auto iter = vec.begin(); iter < vec.end(); iter++)
	{
		cout << *iter << ' ';
	}

	/*for (auto item : vec) {
		cout << item << ' ';
	}*/

	cout << '\n';
	cout << '\n';

}

template<class T>
void showSizeAndCapacity(const vector<T>& vec) {
	cout <<"size:\t\t"<< vec.size() << endl;
	cout <<"capacity:\t"<< vec.capacity() << endl;
	cout << '\n';
}

int main() {
	srand(time(NULL));

	vector<int> vec;
	/*showSizeAndCapacity(vec);*/
	for (size_t i = 0; i < 20; i++)
	{
		vec.push_back(randint(10, 99));
		/*showSizeAndCapacity(vec);*/
	}

	show(vec);
	/*vec.clear();*/
	/*showSizeAndCapacity(vec);*/
	/*cout << vec[2] << endl;*/
	/*vec.shrink_to_fit();*/
	/*showSizeAndCapacity(vec);*/

	/*cout << boolalpha << vec.empty() << endl;*/

	//auto begin_itera = vec.begin();
	//auto end_itera = vec.end();
	//auto r_itera = vec.rbegin();
	

	/*cout << *begin_itera << endl;
	cout << *(end_itera-1) << endl;
	cout << *(r_itera) << endl;
	cout << *(vec.rend() - 1) << endl;*/



	/*for (auto iter = vec.rbegin(); iter < vec.rend(); iter++)
	{
		cout << *iter << ' ';
	}*/

	/*cout << (vec.end() - vec.begin()) << endl;*/
	/*vec.insert((vec.begin() + 3), 36);
	show(vec);*/
}