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

		float hitungLuas() {
			return panjang * Lebar;
		}

		void display() {
			cout << "Panjangnya = " << panjang << endl;
			cout << "Lebarnya = " << Lebar << endl;
			cout << "Luasnya = " << hitungLuas() << endl;
		}
};

int main() {
	bangunDatar pp; // deklasrasi objek pp dari class bangunDatar
	pp.input();
	pp.display();

	return 0;
}