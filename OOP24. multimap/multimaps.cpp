#include<iostream>
#include<map>

using namespace std;

template<class Container>
void show(Container map) {
	for (auto item : map)
	{
		cout << "City:\t\t" << item.first<<'\n'
			<< "Car index:\t" << item.second << endl<<endl;
	}
}

int main() {
	map<string, int> cityIndex;
	multimap<string, int> multiCityIndex;
	cityIndex["Baku"] = 10;
	cityIndex["Sumgait"] = 50;
	cityIndex["Bilasuvar"] = 12;
	cityIndex["Goranboy"] = 22;
	cityIndex["Gubadli"] = 39;

	multiCityIndex.insert(make_pair("Baku", 10));
	multiCityIndex.insert(pair<string, int>("Sumgait", 50));
	multiCityIndex.insert(make_pair("Bilasuvar", 12));
	multiCityIndex.insert(make_pair("Goranboy", 22));
	multiCityIndex.insert(make_pair("Gubadli", 39));
	multiCityIndex.insert(make_pair("Baku", 90));
	multiCityIndex.insert(make_pair("Baku", 77));
	multiCityIndex.insert(make_pair("Baku", 99));

	/*show(cityIndex);*/
	/*show(multiCityIndex);*/

	for (
		auto i = multiCityIndex.lower_bound("Baku"); 
		i != multiCityIndex.upper_bound("Baku"); i++)
	{
		cout << "City:\t\t" << i->first << '\n'
			<< "Car index:\t" << i->second << endl << endl;
	}

	cout << multiCityIndex.count("Baku") << endl;
}