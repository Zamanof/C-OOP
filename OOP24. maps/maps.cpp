#include<iostream>
#include<map>
#include<vector>

using namespace std;


template<class K, class V>
void show(map<K, V> map) {
	/*for (auto item : map)
	{
		cout << "Key = " << item.first
			<< " Value = " << item.second << endl;
	}*/

	auto iter= map.begin();
	for (; iter != map.end(); iter++)
	{
		cout << "Key = " << iter->first
			<< " Value = " << iter->second << endl;
	}
}

int main() {
	map<int, int> mp;
	vector<int> vec;

	/*cout << "max size: " << vec.max_size() << endl;
	cout << "max size: " << mp.max_size() << endl;*/

	int value{}, key{};
	/*cout << "Enter key: ";
	cin >> key;
	cout << "Enter value: ";
	cin >> value;

	pair<int, int> element(key, value);
	mp.insert(element);*/
	mp.insert(make_pair(6, 1236));
	cout << mp[6] << endl;
	mp[6] = 365;
	mp[39] = 155;
	cout << mp[2] << endl;
	show(mp);
	map<string, vector<int>> new_map;
	vector<int> vec1{ 2, 65, 89, 6 };
	new_map["first"] = vec1;
	new_map["second"] = { 69, 455, 2, 36 };

	for (size_t i = 0; i < new_map["first"].size(); i++)
	{
		cout << new_map["first"][i] << ' ';
	}
	cout << endl;

	for (size_t i = 0; i < new_map["second"].size(); i++)
	{
		cout << new_map["second"][i] << ' ';
	}
	cout << endl;

	/*map<vector<int>, int> my;
	my[{2, 3}] = 65;

	cout << my[{2, 3}] << endl;*/


}
