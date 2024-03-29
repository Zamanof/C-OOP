#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main() {

	vector<int> vec{2, 6, 8};

	fstream file_w("../vec.txt", ios::out | ios::app | ios::binary);
	int size = vec.size();
	file_w.write((char*)&size, sizeof(int));
	for (int item : vec) {
		file_w.write((char*)&item, sizeof(int));
	}
	file_w.close();

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
	for (int item: new_vec)
	{
		cout << item << ' ';
	}
	cout << '\n';
}
