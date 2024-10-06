#include <iostream>
#include "deklarasi.h"
using namespace std;

int point(int point, char keterangan) {
	int points = 0;
	return (keterangan == 'w' || keterangan == 'W') ? points += point : point;
}
