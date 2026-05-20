#include <iostream>
#include <cstdlib>
#include "randfuncs.h"

using namespace std;

// returns a random int from 0 up to max-1
int intrand(int max) {
	return rand() % max;
}

void flip_coin() {
	if (intrand(2) == 0) {
		cout << "heads" << endl;
	} else {
		cout << "tails" << endl;
	}
}

void roll_d6() {
	cout << "d6: " << intrand(6) + 1 << endl;
}

void roll_d20() {
	cout << "d20: " << intrand(20) + 1 << endl;
}
