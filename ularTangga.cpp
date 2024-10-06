#include <iostream>
#include <cctype>
#include <string>
#include "deklarasi.h"
using namespace std;

int lemparDadu() {
	return angkaRand(5) + 1;
}

void ularTangga(string user, string computer) {
	bool cek = true, game = 1;
	int giliran = (angkaRand(2));
	int posisi;
	int u = -1, c = -1;
	int j = 100, i = 100;


	cout << "=== Selamat datang digame ular tangga ===" << endl
		 << "Disini kalian akan melempar dadu secara acak" << endl
		 << "Siapa yang sampai angka 100 ialah pemenangnya" << endl;
	cout << endl;


	do {
		for(i = 100; i >= 1; i--) {
			if (cek == true){
				if (j == (u + 1) || j == (c + 1)){
					j--;
				} else {
					cout << j ;
					j--;
				}	

				if (j == u){
					cout << static_cast<char>(toupper(user[0])) ;
				}
				if (j == c){
					cout << static_cast<char>(toupper(computer[0])) ;
				}
				cout << "\t";
				
				
			} else {
				if (j == u){
					cout << static_cast<char>(toupper(user[0])) ;
				}
				if (j == c){
					cout << static_cast<char>(toupper(computer[0])) ;
				}
				
				if (j == u || j == c){
					j++;
				} else {
					j++;
					cout << j;
				}	
				cout << "\t";
			}

			if ((u + 1) == 100 || (c + 1) == 100) {
				if ((u + 1) == 100) {
					cout << user << " menang" << endl;
				} else {
					cout << computer << " menang" << endl;
				}
				break;
			}
			if(i % 10 == 1 && i != 100) {
				j -= 10;
				cek = (cek) ? false : true;
				cout << endl;
			}
		}

		cout << endl << endl;
		cout << "Posisi " << user << " sekarang berada di posisi " << u + 1 << endl;
		cout << "Posisi " << computer << " sekarang berada di posisi " << c + 1 << endl;

		if (giliran == 1){
			cout << endl
				 << "Giliran " << user << " melempar dadu" << endl;
			cout << "Klik Enter untuk melempar dadu" << endl;
			cin.get();
			cin.get();
			posisi = lemparDadu();
			u += posisi;
			cout << user << " mendapatkan angka " << posisi << endl;
			giliran = 2;
		} else {
			cout << endl
				 << "Giliran " << computer << " melempar dadu" << endl;
			cout << "Klik Enter untuk melempar dadu" << endl;
			cin.get();
			cin.get();
			posisi = lemparDadu();
			c += posisi;
			cout << computer << " mendapatkan angka " << posisi << endl;
			giliran = 1;
		}
		i = 100;
		j = 100;
		cout << endl << "Lanjut (1/0): ";
		cin >> game;
	} while(game);

}