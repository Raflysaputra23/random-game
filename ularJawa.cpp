#include <iostream>
#include <cctype>
#include <string>
#include "deklarasi.h"
using namespace std;

int lemparDadu() {
	return angkaRand1(5) + 1;
}

void ularJawa(string user, string computer) {
	bool cek = true, game = 1;
	int giliran = (angkaRand1(2));
	int posisi;
	int u = 0, c = 0;
	int j = 100, i = 100;


	cout << "=== Selamat datang digame ular tangga ===" << endl
		 << "Disini kalian akan melempar dadu secara acak" << endl
		 << "Siapa yang sampai angka 100 ialah pemenangnya" << endl;
	cout << endl;


	do {
		for(i = 100; i >= 1; i--) {

			if (cek == true){
				if (j == u || j == c){
					j--;
				} else {
					cout << j ;
					j--;
				}	

				if (j == (u - 1)){
					cout << static_cast<char>(toupper(user[0])) ;
				}
				if (j == (c - 1)){
					cout << static_cast<char>(toupper(computer[0])) ;
				}
				cout << "\t";
				
				
			} else {
				if (j == (u - 1)){
					cout << static_cast<char>(toupper(user[0])) ;
				}
				if (j == (c - 1)){
					cout << static_cast<char>(toupper(computer[0])) ;
				}
				
				if (j == (u - 1) || j == (c - 1)){
					j++;
				} else {
					j++;
					cout << j;
				}	
				cout << "\t";
			}

			
			if(i % 10 == 1 && i != 100) {
				j -= 10;
				cek = (cek) ? false : true;
				cout << endl;
			}
		}

		cout << endl << endl;
		cout << "Posisi " << user << " sekarang berada di posisi " << u << endl;
		cout << "Posisi " << computer << " sekarang berada di posisi " << c << endl;

		if (u == 100 || c == 100){
			if (u == 100) {
				cout << endl << user << " menang" << endl;
			} else {
				cout << endl << computer << " menang" << endl;
			}
			game = 0;
			break;
		}

		if (giliran == 1){
			cout << endl
				 << "Giliran " << user << " melempar dadu" << endl;
			cout << "Klik Enter untuk melempar dadu" << endl;
			cin.get();
			cin.get();
			posisi = lemparDadu();
			u += posisi + 1;
			cout << user << " mendapatkan angka " << posisi + 1 << endl;
			if (u > 100) {
				int selisih = (u - 100);
				u = 100;
				u -= selisih;
			}
			giliran = 2;
		} else {
			cout << endl
				 << "Giliran " << computer << " melempar dadu" << endl;
			cout << "Klik Enter untuk melempar dadu" << endl;
			cin.get();
			cin.get();
			posisi = lemparDadu();
			c += posisi + 1;
			cout << computer << " mendapatkan angka " << posisi + 1 << endl;
			if (c > 100) {
				int selisih = (c - 100);
				c = 100;
				c -= selisih;
			}
			giliran = 1;
		}
		i = 100;
		j = 100;
		cout << endl << "Lanjut (1/0): ";
		cin >> game;
		cout << endl;
	} while(game);

}