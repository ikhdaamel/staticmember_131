#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	int Nim;
	string Nama;
public:
	mahasiswa();
	mahasiswa(int);
	mahasiswa(string);
	mahasiswa(int iNim, string iNama);
	void cetak();
};

mahasiswa::mahasiswa() {
	Nim = 0;
	Nama = "";
}

mahasiswa::mahasiswa(int iNim) {
	Nim = iNim;
}

mahasiswa::mahasiswa(string iNama) {
	Nama = iNama;
}

mahasiswa::mahasiswa::mahasiswa(int iNim, string iNama) {
	Nim = iNim;
	Nama = iNama;
}

void mahasiswa::cetak() {
	cout << endl << "Nim = " << Nim << endl;
	cout << "Nama = " << Nama << endl;
}

int main() {
	mahasiswa mhs1;
	mahasiswa mhs2(20);
	mahasiswa mhs3("indra");
	mahasiswa mhs4(30, "fauzan");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();

	return 0;
}