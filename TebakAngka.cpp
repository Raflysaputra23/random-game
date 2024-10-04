#include <iostream>
#include <ctime>
using namespace std;

void teksComputer(string computer, string teks){
    cout << computer << " : " << '"' << teks << '"';
}

int main(){
    int random;
    srand(time(0));
    random = 1 + rand() % 100;

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

    cin.get();
    teksComputer(computer, "Baiklah kita akan bermain tebak tebakan angka");
    cin.get();
    teksComputer(computer, "Aku dulu disebut sebagai penerawang handal jadi jangan meremehkanku");
    cout << endl << endl;

    //Codingan tebak tebakan
    cout << "==================================" << endl
         << "Game Tebak Angka" << endl
         << "==================================" << endl << endl;
    cout << "Tebak angka yang dikeluarkan oleh Tako-chan" << endl
         << "Tebakan yang paling mendekati adalah yang menang" << endl;
    cin.get();


    return 0;
}