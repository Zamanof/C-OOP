#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
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

template<class T>
void show(vector<T> vec);

int main() {
	srand(time(NULL));
	vector<int> numbers(20);
	generate_n(numbers.begin(), numbers.size(), Randint(-10, 10));
	show(numbers);
	// 1. Non modify operations

	// for_each()	vipolnyayet operasii dlya kajdoqo elementa posledovatelnosti

	// find()		voazrashayet pervoye vxojdeniye iskomoqo znacheniya v posledovatelnosti, esli ne naxodit vozvrashayet .end() iterator

	// find_if()	voazrashayet pervoye vxojdeniye iskomoqo znacheniya v posledovatelnosti po predikatu, esli ne naxodit vozvrashayet .end() iterator

	// count()		vozvrashyet kolichestvo iskomoko znacheniya
	/*cout << count(numbers.begin(), numbers.end(), 52) << endl;*/

	// count_if()	vozvrashyet kolichestvo iskomix elementov po predikatu
	/*cout << count_if(numbers.begin(), numbers.end(), [](int n) {return n % 3 == 0; }) << endl;
	cout << count_if(numbers.begin(), numbers.end(), [](int n) {return n < 0; }) << endl;*/
	/*cout << count_if(numbers.begin(), numbers.end(), [](int n) {
		if (n < 0) return false;
		if (n == 1) return true;

		for (size_t i = 2; i <= n / 2; i++)
		{
			if (n % i == 0) return false;
		}
		return true;
		}) << endl;*/
		// search()		- voazrashayet pervoye vxojdeniye iskomoy podposledovatelnosti v posledovatelnosti
		/*vector<int> numbs{ 1,2,3,4,5 };
		vector<int> subnumbs{ 3,4 };
		auto srch = search(numbs.begin(), numbs.end(), subnumbs.begin(), subnumbs.end());
		for (auto i = srch; i < numbs.end(); i++)
		{
			cout << *i << ' ';
		}
		cout << '\n';*/



		// search_n()	- voazrashayet pervoye vxojdeniye iskomoy podposledovatelnosti stoyashuyu iz n povtoreniy v posledovatelnosti

		// 2. Modfied operations

		// copy()				kopiruet posledovatelnost nachinaya s pervoqo elementa

		// copy_if()			kopiruet posledovatelnost po predikatu

		// swap()				menyayet mestami dva elementa

	/*int a = 5, b = 56;
	cout << "a = " << a << " b = " << b << endl;
	swap(a, b);
	cout << "a = " << a << " b = " << b << endl;*/

	// replace()			zamenyayet elementi s ukazannim znacheniyem
	/*replace(numbers.begin(), numbers.end(), 3, 5);
	show(numbers);*/
	// replace_if()			zamenyayet elementi po predikatu
	/*replace_if(numbers.begin(), numbers.end(), [](int n) {return n < 0; }, 0);
	show(numbers);*/

	// replace_copy()		kopiruet posledovatelnost, zamenyaya elementi s ukazannim znacheniyem

	// replace_copy_if()	kopiruet posledovatelnost, zamenyaya elementi po predikatu

	// fill()				zamenyayet vse elementi ukazannim znacheniyen
/*vector<string> words(10);
fill(words.begin(), words.end(), "Empty");
show(words);*/

// remove()				udalyayet elementi s ukazannim znacheniyem

// remove_if()			udalyayet elementi po predikatu
/*show(numbers);
int count_even = count_if(numbers.begin(), numbers.end(), [](int n) {return n % 2 == 0; });
for (size_t i = 0; i < count_even; i++)
{
	auto s = numbers.begin();
	auto e = numbers.end();

	auto rmv = remove_if(s, e, [](int n) {return n % 2 == 0; });
	numbers.erase(rmv);
	show(numbers);

}*/

// remove_copy()		kopiruet posledovatelnost, udalyaya elementi s ukazannim znacheniyem

// remove_copy_if()		kopiruet posledovatelnost, udalyaya elementi po predikatu

// reverse()			menyayet poryadok posledovatelnosti na obratniy
/*reverse(numbers.begin(), numbers.end());
show(numbers);*/

// random_shuffle		peremeshayet randomno elementi
/*random_shuffle(numbers.begin(), numbers.end());
show(numbers);*/
// transform()			vipolnyayet zadannuyu operasiyu nad kajdim elementom

/*vector<int> multTwo;
transform(numbers.begin(), numbers.end(), back_inserter(multTwo), [](int n) {return n * 2; });
show(multTwo);*/

// unique()				udalyayaet ravniye sosedniye elementi

// unique_copy()		kopiruet posledovatelnost, udalyayaya ravniye sosedniye elementi


// 3. sort operation

// sort()				sortirovka

// partial_sort()		sortirovka chasti posledovatelnosti

// stable_ sort()		sortirovka soxraneniyem poryadka ravnix elementov

// lower_bound()		naxodit perviy element menshiy chem znacheniye

// upper_bound()		naxodit perviy element bolshiy chem znacheniye

// binary_search()		proveryayet est li zadanniy element v sortirovannoy posledovatelnosti
	/*sort(numbers.begin(), numbers.end(), [](int left, int right) {return left < right; });
	show(numbers);
	auto find = binary_search(numbers.begin(), numbers.end(), 3);
	if (find)
	{
		cout << "3 in vector" << endl;
	}
	else {
		cout << "Not found" << endl;
	}*/


	// merge()				slivayet dve otsortirovanniye posledovatelnosti


	// 4. Rabota s mnojestvami

	// includes()			proverka na vxojdeniye

	// set_union()			obyedeneneyie mnojestv

	// set_intersection()	peresecheniye mnojestv

	// set_difference()		raznost mnojestv


	// 5. Minimumi i maksimumi

	// min()				menshe iz dvux

	// max()				bolshe iz dvux

	// min_element()		naimensheye v posledovatelnosti

	// max_element()		naibolshoye v posledovatelnosti



	// 6. Perestonovki
	// next_permutation()	sleduyushaya perestonovka v leksikoqraficheskom poryadke
	// prev_permutation()	predidushaya perestonovka v leksikoqraficheskom poryadke

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