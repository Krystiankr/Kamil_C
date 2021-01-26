#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;


int main() {
	printf("Program oblicza ekstrema tablicy i ich srednia\n");
	printf("Podaj liczbe elementow tablicy: \n");
	int n;
	cin >> n;
	int min=200, max=-100, srednia=0;
	int *tab = (int*)malloc(n * sizeof(int));
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		tab[i] = rand() % 100;
		if (tab[i] < min) min = tab[i];
		if (tab[i] > max) max = tab[i];
		srednia += tab[i];
	}
	printf("Max: %d, Min: %d, Srednia: %d", max, min, srednia / n);

}
