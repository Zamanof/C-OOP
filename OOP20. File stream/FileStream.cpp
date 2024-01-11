#include<iostream>

using namespace std;

int main() {

	// ofstream - vivod (zapis) dannix v fayl
	// ifstream - vvod (chteniye) dannix iz fayla
	// fstream - chteniye i zapis danniz

	/*
		fstream() - sozdayet potok ne otkrivaya fayla
		
		fstream(
			const char* name			// imya fayla
			int omode					// rejim otkritiya
			int = filebuf::openprot		// zashita fayla
			) - sozdayet potok, otkrivayet fayl i svyazivayet s potokom
		
		fstream(
			int f						// deskriptor fayla
		) - sozdayet potok i svyazivayet eqo uje s otkritim faylom

		fstream(
			int f						// deskriptor fayla
			char* buf					// bufer
			int len						// razmer bufera
		) - sozdayet potok i svyazivayet eqo uje s otkritim faylom, 
			no potoku naznachayetsya bufer 
	*/

	/*
	enum _Openmode {
		in			= 0x01,		// otkrit tolko dlya chteniya
		out			= 0x02,		// otkrit tolko dlya zapisi
		ate			= 0x04,		// ustanovit ukazatel na kones fayla
		app			= 0x08,		// dobavit danniye v kones fayla
		trunc		= 0x10,		// usech fayl do nulevoy dlini
		_Nocreate	= 0x40,		// esli fayl ne sushestvuyet oshibka otkritiya
		_Noreplace	= 0x80,		// esli fayl uje sushestvuyet oshibka otkritiya
		binary		= 0x20		// otkrit fayl dlya dvoichnoqo obmena
	}
	*/
	
	//	Funksii dlya raboti s faylami
	// 
	//	void open(const char* fileName, int mode, int protection)
	//  Prisoedinyayet fayloviy potok k konkretnomu faylu

	// int close() - ochishayet bufer,  otsoedinyayet fayloviy potok, zakrivayet fayl

	// istream::read(unsigned char* buf, int len)
	// istream::read(char* buf, int len)
	// proizvodit chtenye bloka simvolov

	// ostream::write(const unsigned char* buf, int n)
	// ostream::write(const char* buf, int n)
	// proizvodit zapis bloka simvolov

	// int istream::get()
	// int istream::get(unsigned char&)
	// int istream::get(char&)
	// izvlekayet odin simvol iz potoka

	// ostream::put(char)
	// pomeshayet odin simvol v potok


	// istream::get(unsigned char* buf, int n, char c = '\n')
	// istream::get(char* buf, int n, char c = '\n')
	// izvlekayet stroku iz potoka




}