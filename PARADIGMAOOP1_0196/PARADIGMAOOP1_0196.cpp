#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	const int id;
	string nama;
	float nilai;

public:
	mahasiswa(int pID, string pNama, float pNilai) :id(pID), nama(pNama), nilai(pNilai) { //membuat definisi
	}



	~mahasiswa() {
		cout << "id  = " << id << endl;
		cout << "Nama = " << nama << endl;
		