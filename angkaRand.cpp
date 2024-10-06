#include <ctime>
#include <cstdlib>
#include "deklarasi.h"
using namespace std;

int angkaRand(int rentang) {
	srand(time(0) + 20);
	return rand() % rentang;
}

int angkaRand1(int rentang) {
	srand(time(0));
	return rand() % rentang;
}