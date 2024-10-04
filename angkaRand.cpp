#include <ctime>
#include <cstdlib>
#include "deklarasi.h"
using namespace std;

int angkaRand(int rentang) {
	srand(time(0));
	return rand() % rentang;
}