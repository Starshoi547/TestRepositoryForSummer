#include "Header.h"



int RandomNumbersComm(int randomizer) {
	srand(time(NULL));
	randomizer = rand() % 10;
	return randomizer;
}
