#include <iostream>
#include "deklarasi.h"
using namespace std;

int menang(string name, string user, string computer, string win) {
	cout << user << "\t \t VS \t \t" << computer << endl
		 << name << "\t \t \t \t" << "computer" << endl;
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
		 << name << "\t \t \t \t" << "computer" << endl;
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


void suitJawa() {
	int pil, pointU, pointC;
	char cek;
	string user, computer;
	pointU = pointC = 0;
	string suit[3] = {"kertas","batu","gunting"};
	computer = pilCom();
	
	cout << "Selamat datang di game suit jawa" << endl
		 << "Masukkan nama anda: ";  getline(cin >> ws, user);

	do {
		cout << "Silahkan pilih sesuai opsi (1: kertas, 2: batu, 3: gunting)" << endl;
		cout << "Pilih opsi: "; cin >> pil;
		cout << endl;
		switch(pil) {
			case 1:
				if (computer == "batu"){
					pointU += menang(user, suit[pil - 1], computer, user);
				} else if(computer == "kertas"){
					pointC += menang(user, suit[pil - 1], computer, "computer");
				} else {
					draw(user, suit[pil - 1], computer);
				}
			break;
			case 2:
				if (computer == "gunting"){
					pointU += menang(user, suit[pil - 1], computer, user);
				} else if(computer == "kertas"){
					pointC += menang(user, suit[pil - 1], computer, "computer");
				} else {
					draw(user, suit[pil - 1], computer);
				}
			break;
			case 3:
				if (computer == "kertas"){
					pointU += menang(user, suit[pil - 1], computer, user);
				} else if(computer == "batu"){
					pointC += menang(user, suit[pil - 1], computer, "computer");
				} else {
					draw(user, suit[pil - 1], computer);
				}
			break;
			default:
				cout << "Masukkan opsi yang valid!!" << endl;
		}
		cout << endl;
		computer = pilCom();
		cout << "Point User: " << pointU << endl;
		cout << "Point Computer: " << pointC << endl << endl;

		cout << "Mau main lagi? (y/n): ";
		cin >> cek;
	} while(cek == 'y' || cek == 'Y');
}