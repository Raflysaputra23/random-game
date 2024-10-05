#include <iostream>
#include "deklarasi.h"
using namespace std;

int menang(string name, string user, string computer, string pilComputer, string win) {
	cout << user << "\t \t VS \t \t" << pilComputer << endl
		 << name << "\t \t \t \t" << computer << endl;
	cout << endl << win << " menang" << endl;
	return point(1, 'w');
}

// int kalah(string name, string user, string computer, string lose) {
// 	cout << user << "\t \t VS \t \t" << computer << endl
// 		 << name << "\t \t \t \t" << "computer" << endl;
// 	cout << endl << lose << " kalah" << endl;
// 	return point(0, 'k');
// }

void draw(string name, string user, string computer) {
	cout << user << "\t \t VS \t \t" << computer << endl
		 << name << "\t \t \t \t" << computer << endl;
	cout << endl << "Draw" << endl;
}

string pilCom() {
	int random = angkaRand(15);	
	if (random > 10){
		return "kertas";
	} else if(random > 5) {
		return "batu";
	} else {
		return "gunting";
	}
	
}


void suitJawa(string user, string computer) {
	int pil, pointU, pointC;
	string pilihanComputer;
	char cek;
	pointU = pointC = 0;
	string suit[3] = {"kertas","batu","gunting"};
	pilihanComputer = pilCom();
	
	cout << "Selamat datang di game suit jawa" << endl;

	do {
		cout << "Silahkan pilih sesuai opsi (1: kertas, 2: batu, 3: gunting)" << endl;
		cout << "Pilih opsi: "; cin >> pil;
		cout << endl;
		switch(pil) {
			case 1:
				if (pilihanComputer == "batu"){
					pointU += menang(user, suit[pil - 1], computer, pilihanComputer, user);
				} else if(pilihanComputer == "kertas"){
					pointC += menang(user, suit[pil - 1], computer,pilihanComputer, computer);
				} else {
					draw(user, suit[pil - 1], pilihanComputer);
				}
			break;
			case 2:
				if (pilihanComputer == "gunting"){
					pointU += menang(user, suit[pil - 1], computer,pilihanComputer, user);
				} else if(pilihanComputer == "kertas"){
					pointC += menang(user, suit[pil - 1], computer,pilihanComputer, computer);
				} else {
					draw(user, suit[pil - 1], pilihanComputer);
				}
			break;
			case 3:
				if (pilihanComputer == "kertas"){
					pointU += menang(user, suit[pil - 1], computer, pilihanComputer, user);
				} else if(pilihanComputer == "batu"){
					pointC += menang(user, suit[pil - 1], computer,pilihanComputer, computer);
				} else {
					draw(user, suit[pil - 1], pilihanComputer);
				}
			break;
			default:
				cout << "Masukkan opsi yang valid!!" << endl;
		}
		cout << endl;
		pilihanComputer = pilCom();
		cout << "Point " << user << ": " << pointU << endl;
		cout << "Point " << computer << ": " << pointC << endl << endl;

		cout << "Mau main lagi? (y/n): ";
		cin >> cek;
	} while(cek == 'y' || cek == 'Y');
}