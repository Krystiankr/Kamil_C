#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

float pole(float a, float b) {
	return a * b;
}

int main() {
	printf("Obliczam pole prostokata o bokach: 3.2 i 8.4\n");
	printf("Pole wynosi: %f", pole(3.2, 8.4));
}
