#include <iostream>
#include "fungsi.h"
using namespace std;


int main(){
    int game;
    cout << "=========================================================================" << endl
         << "\t" "\t" "\t" "\t" << "Selamat Datang" << endl
         << "\t" "\t" "\t" << "       Di Game Kehokian" << endl
         << "=========================================================================" << endl << endl;

    cout << "Silahkan mau bermain game apa? (1: tebak angka, 2: suit jawa)" << endl;
    cout << "Pilih sesuai opsi dia atas" << endl;
    cout << "Pilih game: ";
    cin >> game;
    switch (game) {
        case 1:

        break;
        case 2:
            suitJawa();
        break;
        default:
        cout << "Pilih sesuai dengan opsinya!!" << endl;
    }
    return 0;
}