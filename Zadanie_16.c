#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;


int main() {
	printf("Program oblicza ekstrema tablicy i ich srednia\n");
	int n = 10;
	int min=200, max=-100, srednia=0;
	srand(time(NULL));
	int tab[100];
	for (int i = 0; i < 100; i++) {
		tab[i] = rand() % 100;
		if (tab[i] < min) min = tab[i];
		if (tab[i] > max) max = tab[i];
		srednia += tab[i];
	}
	printf("Max: %d, Min: %d, Srednia: %d", max, min, srednia / 100);

}
