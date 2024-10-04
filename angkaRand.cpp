#include <ctime>
#include <cstdlib>
#include "fungsi.h"
using namespace std;

int angkaRand(int rentang) {
	srand(time(0));
	return rand() % rentang;
}