#include <iostream>
#include "deklarasi.h"

using namespace std;

void teksComputers(string computer, string teks){
    cout << computer << " : " << '"' << teks << '"';
}

void TebakAngka(string computer, string user){
    cin.get();
    teksComputers(computer, "Baiklah kita akan bermain tebak tebakan angka");
    cin.get();
    teksComputers(computer, "Aku dulu disebut sebagai penerawang handal jadi jangan meremehkanku");
    cout << endl << endl;
    cin.get();

    cout << "--------------------------------------------------" << endl
         << "                Game Tebak Angka" << endl
         << "--------------------------------------------------" << endl << endl;
    cout << "Tebak angka yang kemunkinan dikeluarkan oleh Tako-chan" << endl
         << "Tebakan yang paling mendekati adalah yang menang" << endl;

    cin.get();
    teksComputers(computer, "Apakah kamu siap, Aku sudah tidak sabar");
    cin.get();

    int win;
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
                cin.get();
                teksComputers("Tako-chan", "Peraturannya sederhana pilihlah angka dari 1-100");
                cout << endl;
                cin.get();
                teksComputers(computer, "Baiklah mari kita mulai !!!!!");
                cin.get();
                teksComputers(computer, "Silahkan kamu memilih duluan...");
                cout << endl << endl << "Masukkan angka tebakan : ";
                cin >> tebakan;
                cout << endl;
                cin.get();
                cout << computer << " : " << '"' << "Hmmm..., aku akan memilih angka " << tebakanC << '"' << endl;
                cin.get();
                teksComputers("Tako-Chan", "Mari kita lihat");
                cin.get();
                teksComputers("Tako-Chan", "Pemenangnya adalah...");
                cout << endl;
                cin.get();

                int selisihUser, selisihComputer;

                if(tebakanC == tebakan){
                    tebakanC+=1;
                }

                if(tebakan > random){
                    selisihUser = tebakan - random;
                } else {
                    selisihUser = random - tebakan;
                }

                if(tebakanC > random){
                    selisihComputer = tebakanC - random;
                } else {
                    selisihComputer = random - tebakanC;
                }

                if(selisihUser == 0){
                    teksComputers("Tako-Chan", user);
                    cout << endl;
                    teksComputers("Tako-Chan", "Tebakan anda tepat sekali");
                    win = 1;
                }
                else if (selisihComputer == 0){
                    teksComputers("Tako-Chan", computer);
                    cout << endl;
                    teksComputers("Tako-Chan", "Tebakan anda tepat sekali");
                    win = 2;
                }
                else if (selisihUser < selisihComputer){
                    teksComputers("Tako-Chan", user);
                    cout << endl;
                    cout << "Tako-Chan" << " : " << '"' << "Dengan selisih tebakan : " << selisihUser << '"';
                    win = 3;
                } else {
                    teksComputers("Tako-Chan", computer);
                    cout << endl;
                    cout << "Tako-Chan" << " : " << '"' << "Dengan selisih tebakan : " << selisihComputer << '"';
                    win = 4;
                }

                cout << endl;
                cin.get();
                cout << "Tako-Chan" << " : " << '"' << "Angka tebakannya adalah : " << random << '"' << endl;
                cin.get();

                switch (win){
                case 1:
                    teksComputers(computer, "Hebat sekali kamu bisa menebak dengan tepat, aku mengakui kekalahanku ~o~");
                    break;
                case 2:
                    teksComputers(computer, "Ini sangat mudah, aku bisa melihat dengan jelas angka apa yang akan keluar ^-^");
                    break;
                case 3:
                    teksComputers(computer, "Agrhh, itu tadi hampir saja aku yang menang :(");
                    break;
                case 4:
                    teksComputers(computer, "Sayang sekali kawan keberuntungan berpihak padaku setiap saat >< _ ><");
                default:
                    break;
                }
                
                random = 1 + angkaRand(100);
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