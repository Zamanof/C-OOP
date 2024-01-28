#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main() {
	fstream file_r("../vec.txt", ios::in | ios::binary);
	int new_size{};
	file_r.read((char*)&new_size, sizeof(int));
	vector<int> new_vec(new_size);
	int tmp{};
	for (size_t i = 0; i < new_size; i++)
	{
		file_r.read((char*)&new_vec[i], sizeof(int));
	}
	file_r.close();
	for (int item : new_vec)
	{
		cout << item << ' ';
	}
	cout << '\n';
}
