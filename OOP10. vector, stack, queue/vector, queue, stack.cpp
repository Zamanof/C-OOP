#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<list>

using namespace std;

void show(const vector<int> vec)
{
	cout << '\n';
	for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << ' ';
	}
	cout << '\n';
}


int randInt() {
	return rand() % 90 + 10;
}

int main() {
	srand(time(NULL));
	//vector<int> vec;
	//cout <<"vector size = " << vec.size() << endl;
	//cout <<"vector capacity = " << vec.capacity() << endl;
	//vec.push_back(randInt());
	//cout << "vector size = " << vec.size() << endl;
	//cout << "vector capacity = " << vec.capacity() << endl;
	//show(vec);
	//for (size_t i = 0; i < 40; i++)
	//{
	//	vec.push_back(randInt());
	//	/*cout << "vector size = " << vec.size() << endl;
	//	cout << "vector capacity = " << vec.capacity() << endl;*/
	//}
	//show(vec);
	//vec.clear();
	//cout<< boolalpha << vec.empty()<<endl;

	//cout << "vector size = " << vec.size() << endl;
	//cout << "vector capacity = " << vec.capacity() << endl;

	/*stack<int> mystack;
	mystack.push(5);
	mystack.push(7);
	mystack.push(16);
	cout << mystack.top() << endl;
	cout << mystack.size() << endl;
	mystack.pop();
	cout << mystack.top() << endl;
	cout << mystack.size() << endl;*/

	queue<int> myqueue;
	myqueue.push(25);
	cout << myqueue.front() << endl;
	cout << myqueue.back() << endl;
	myqueue.push(64);
	cout << myqueue.front() << endl;
	cout << myqueue.back() << endl;
	myqueue.pop();
	cout << myqueue.front() << endl;
	cout << myqueue.back() << endl;
}