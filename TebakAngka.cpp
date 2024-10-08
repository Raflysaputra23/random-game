#include <iostream>
#include "deklarasi.h"

using namespace std;

void teksComputers(string computer, string teks){
    cout << computer << " : " << '"' << teks << '"';
}

void TebakAngka(string user, string computer){
    cin.get();

    cout << "--------------------------------------------------" << endl
         << "                Game Tebak Angka" << endl
         << "--------------------------------------------------" << endl << endl;
    cout << "Tebak angka yang kemunkinan dikeluarkan oleh Tako-chan" << endl
         << "Jumlah tebakan tidak diberi batas pemain bisa menebak sampai anngka tebakan benar" << endl
         << "Siapa yang duluan menebak benar adalah pemenangnya" << endl;

    cin.get();
    teksComputers(computer, "Apakah kamu siap, Aku sudah tidak sabar");
    cin.get();

    int win;
    int menang;
    int batasB = 0, batasA = 101;
    int selisihBatas;
    string mainLagi;
    int siap;

    do
    {
        cout << "             ---------------------------" << endl;
        cout << "             | 1 Siap | | 2 Belum Siap |" << endl;
        cout << "             ---------------------------" << endl;
        cout << "Keputusan : ";
        cin >> siap;
        cout << endl;

        if(siap == 1){
                int random = 1+ angkaRand(100);
                int tebakan, tebakanC = 1 + angkaRand1(100);

            do{

                batasB = 0;
                batasA = 101;
                menang = 0;
                cin.get();
                teksComputers("Tako-chan", "Peraturannya sederhana pilihlah angka dari 1-100");
                cout << endl;
                
                do{

                    cout << endl << "Masukkan angka tebakan : ";
                    cin >> tebakan;

                    if(tebakanC == tebakan){
                        tebakanC+=1;
                    }

                    cout << endl;
                    cin.get();
                    cout << computer << " : " << '"' << "Hmmm..., aku akan memilih angka " << tebakanC << '"' << endl;
                    cin.get();

                    if(tebakanC > random){
                        if(batasA > tebakanC) batasA = tebakanC;
                    }
                    if (tebakanC < random){
                        if(batasB < tebakanC) batasB = tebakanC;
                    }
                    if(tebakan > random){
                        if(batasA > tebakan) batasA = tebakan;
                    }
                    if(tebakan < random){
                        if(batasB < tebakan) batasB = tebakan;
                    }

                    if (tebakanC == random){
                        cout << "Tako-Chan" << " : " << '"' << computer << " Menang" << '"';
                        menang=1;
                        win=2;
                    }
                    else if (tebakan < random){
                        cout << "Tako-Chan" << " : " << '"' << "Tebakan " << user << " terlalu rendah" << '"' << endl;
                    }
                    else if (tebakan > random){
                        cout << "Tako-Chan" << " : " << '"' << "Tebakan " << user << " terlalu tinggi" << '"' << endl;
                    }

                    if(tebakan == random){
                        cout << "Tako-Chan" << " : " << '"' << user << " Menang" << '"';
                        menang=1;
                        win=1;
                    }
                    else if (tebakanC < random){
                        cout << "Tako-Chan" << " : " << '"' << "Tebakan " << computer << " terlalu rendah" << '"' << endl;
                        teksComputers("Tako-Chan", "Silahkan coba lagi");
                        cout << endl;
                    }
                    else if (tebakanC > random){
                        cout << "Tako-Chan" << " : " << '"' << "Tebakan " << computer << " terlalu tinggi" << '"' << endl;
                        teksComputers("Tako-Chan", "Silahkan coba lagi");
                        cout << endl;
                    }

                    selisihBatas = batasA - (batasB + 1);
                    tebakanC = 1 + angkaRand1(selisihBatas) + batasB;
                
                } while (menang !=1);

                cin.get();
                cout << "Tako-Chan" << " : " << '"' << "Angka tebakannya adalah : " << random << '"' << endl;
                cin.get();

                switch (win){
                case 1:
                    teksComputers(computer, "Hebat sekali kamu bisa menebak dengan tepat, aku mengakui kekalahanku >< _ ><");
                    break;
                case 2:
                    teksComputers(computer, "Ini sangat mudah, aku bisa melihat dengan jelas angka apa yang akan keluar ^-^");
                    break;
                default:
                    break;
                }

                random= 1 + angkaRand(100);
                tebakanC = 1 + angkaRand1(100);

                cout << endl;
                cin.get();
                teksComputers(computer, "Apakah kamu ingin bermain lagi?");
                cout << endl << "ketik Ya atau Tidak : ";
                cin >> mainLagi;
                cout << endl;

            } while (mainLagi == "ya" || mainLagi == "Ya" || mainLagi == "YA");
            
        } else {
            teksComputers(computer, "Katakan padaku kapanpun kamu siap");
            cout << endl;
        }
    } while (siap == 2);
    
}