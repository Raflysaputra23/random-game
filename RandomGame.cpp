#include <iostream>
#include <ctime>
using namespace std;




int main(){
    string nama;
    string computer;

    cout << "=========================================================================" << endl
         << "\t" "\t" "\t" "\t" << "Selamat Datang" << endl
         << "\t" "\t" "\t" << "       Di Game Kehokian" << endl
         << "=========================================================================" << endl << endl;

    cout << "Buktikan Keberuntungan Anda Dengan Bermain Game Ini" << endl << endl;

    cout << "Masukkan Nama Anda : ";
    getline(cin,nama);
    cout << "Masukkan Nama Lawan Anda : ";
    getline(cin,computer);
    cout << endl;

    cout << computer << " : " << '"' << "Haloo " << nama << " senang bertemu denganmu pekenalkan namaku " << computer << '"';
    cin.get();
    teksComputer(computer, "Mari kita lihat siapa yang paling hebat dalam hal keberuntungan");
    cin.get();
    teksComputer(computer, "Game apa yang ingin kamu mainkan");
    cout << endl;

    return 0;
}