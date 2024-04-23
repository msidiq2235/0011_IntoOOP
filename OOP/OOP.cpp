#include <iostream>
using namespace std;

class bangunDatar {

	//akses modifier
	private:
		float panjang, Lebar;
	public:
		float Luas;

		void input() { //metode input persegi panjang

			cout << "Masukan Panjangnya = ";
			cin >> panjang;
			cout << "Masukan Lebarnya = ";
			cin >> Lebar;
		}

		float hitungluas() {
			return panjang * Lebar;
		}
};