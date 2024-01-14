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

	// istream::getline(unsigned char* buf, int n, char c = '\n')
	// istream::getline(signed char* buf, int n, char c = '\n')
	// izvlekayet stroku iz potoka (ne zanositsya v bufer)


	// istream::ignore(int n=1, int d=EOF)
	// izvlekayet simvoli iz potoka poka ne vstretit oqranichitel d, 
	// ili ne izvlechet n simvolov

	// istream::gcount()
	// vozvrashayet chislo simvolov izvlechennix iz potoka

	// istream::peek()
	// mojno "posmotret" na sleduyushiy simvol potoka

	// istream::putback(char c)
	// pomeshayet v potpk simvol kotoriy budet sleduyushim izvlekayemim simvolom
	// iz potoka 

	// istream::seekg(long pos)
	// ustanovlivayet pozisiyu chteniya

	// istream::seekg(long off, ios::seek_dir dir)
	// vipolnyayet premesheniye off v storonu dir {beg, cur, end}

	// ostream::seekp(long pos)
	// ustonavlivayet absoloyutnuyu pozisyu zapisa v fayl

	// ostream::seekp(long off, ios::seek_dir dir)
	// otnositelnoye premesheniye zapisi v fayl

	// istream::tellg()
	// tekushaya pozisiya potoka

	// ostream::tellp()
	// tekushaya pozisiya zapisi potoka
}