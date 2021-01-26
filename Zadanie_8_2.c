#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

float pole(float n) {
	return n * n;
}

int main() {
	printf("Podaj bok kwadratu: 2.2\n");
	printf("Pole wynosi: %f", pole(2.2));
}
