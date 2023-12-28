#include <iostream>
#include <vector>
using namespace std;

int main()
{    
    vector<int> vc {5, 3, 6, 7};
	vc.push_back(13);
    /*vc.erase(vc.begin() + 1);*/
	for (int a: vc)
	{
		cout << a << endl;
	}

}