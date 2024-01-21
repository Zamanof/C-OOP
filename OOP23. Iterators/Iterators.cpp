#include<iostream>

using namespace std;

int main() {
	const int length = 6;
	int arr[length]{ 2, 9, 7, 78, 98, 15};


	/*for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';*/

	/*for (int item : arr) {
		cout << item << ' ';
	}
	cout << '\n';*/

	// Iterators
	// input - vxodniye iteratori
	//		dlya chteniye adresuemix dannix iz pamyati
	// ==, !=, *i, ++i, i++, *i++

	// output - vixodniye iteratori
	//		addresuyut danniye dlya zapisi v pamyat
	// ++i, i++, *i = value. *i++ = value

	// forward - odnonapravlenniye iteratori
	//		soderjit vse svoystva input i output iteratorov
	//		moqut premeshatsya ot nachala posledovatelnosi
	//		do konsa
	// ==, !=, =, *i, ++i, i++, *i++

	// bidirectional - dvunapravlenniye iteratori
	//		soderjit vse svoystva input i output iteratorov
	//		moqut premeshatsya ot nachala posledovatelnosi
	//		do konsa i naoborot
	// ==, !=, =, *i, ++i, i++, *i++, --i, i--, *i--

	// random access - iteratori proizvolnoqo dostupa
	//		soderjit vse svoystva vsex chetirex iteratorov
	//		moqut premeshatsya ot nachala posledovatelnosi
	//		do konsa
	// ==, !=, =, *i, ++i, i++, *i++, --i, i--, *i--
	// i+=n, i+n, i-=n, i-n, i1-i2, i[n], 
	// i1<i2, i1<=i2,  i1>i2, i1>=i2

}