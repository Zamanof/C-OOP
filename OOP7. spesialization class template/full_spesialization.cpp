#include<iostream>
#include<vector>

using namespace std;



template<class T>
class List
{
	vector<T> list;
public:
	void add(T item) {
		list.push_back(item);
	}
	void remove(int index) {
		list.erase(list.begin() + index);
	}
	auto getMin() {
		auto Min = list.begin();
		for (auto i = list.begin(); i < list.end(); i++)
		{
			if (*i < *Min) {
				Min = i;
			}
		}
		return *Min;
	}

	auto getMax() {
		auto Max = list.begin();
		for (auto i = list.begin(); i < list.end(); i++)
		{
			if (*i > *Max) {
				Max = i;
			}
		}
		return *Max;
	}

};

template<>
class List<const char*> {
	vector<const char*> list;
public:
	void add(const char* item) {
		list.push_back(item);
	}
	void remove(int index) {
		list.erase(list.begin() + index);
	}
	auto getMin() {
		auto Min = list.begin();
		for (auto i = list.begin(); i < list.end(); i++)
		{
			if (strcmp(*i, *Min) < 0) {
				Min = i;
			}
		}
		return *Min;
	}

	auto getMax() {
		auto Max = list.begin();
		for (auto i = list.begin(); i < list.end(); i++)
		{
			if (strcmp(*i, *Max) > 0) {
				Max = i;
			}
		}
		return *Max;
	}
};


int main() {

	/*List<int> intList;
	intList.add(36);
	intList.add(12);
	intList.add(1);
	intList.add(37);

	cout << "Max = " << intList.getMax() << endl;
	cout << "Min = " << intList.getMin() << endl;*/
	List<const char*> strList;
	strList.add("Salam");
	strList.add("Hi");
	strList.add("Goodbye");
	strList.add("Bye");

	cout << "Max = " << strList.getMax() << endl;
	cout << "Min = " << strList.getMin() << endl;
}