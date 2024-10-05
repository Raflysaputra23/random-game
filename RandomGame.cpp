#include <iostream>
#include "deklarasi.h"
using namespace std;

void teksComputer(string computer, string teks){
    cout << computer << " : " << '"' << teks << '"';
}

int main(){
    int game;
    string user, computer;
    cout << "=========================================================================" << endl
         << "\t" "\t" "\t" "\t" << "Selamat Datang" << endl
         << "\t" "\t" "\t" << "       Di Game Kehokian" << endl
         << "=========================================================================" << endl << endl;
    cout << "Buktikan Keberuntungan Anda Dengan Bermain Game Ini" << endl << endl;

    cout << "Masukkan Nama Anda : ";
    getline(cin >> ws,user);
    cout << "Masukkan Nama Lawan Anda : ";
    getline(cin >> ws,computer);
    cout << endl;

    cout << computer << " : " << '"' << "Haloo " << user << " senang bertemu denganmu pekenalkan namaku " << computer << '"';
    cin.get();
    teksComputer(computer, "Mari kita lihat siapa yang paling hebat dalam hal keberuntungan");
    cin.get();
    teksComputer(computer, "Game apa yang ingin kamu mainkan");
    cout << endl;

    cout << "Silahkan mau bermain game apa? (1: tebak angka, 2: suit jawa)" << endl;
    cout << "Pilih sesuai opsi dia atas" << endl;
    cout << "Pilih game: ";
    cin >> game;
    switch (game) {
        case 1:
            tebakAngka(user, computer);
        break;
        case 2:
            suitJawa(user, computer);
        break;
        default:
        cout << "Pilih sesuai dengan opsinya!!" << endl;
    }
    return 0;
}