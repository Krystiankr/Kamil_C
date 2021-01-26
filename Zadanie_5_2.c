#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	printf("Zadanie 3\n");

	int tab[8];
	int srednia_n=0, srednia_p=0;
	for (int i = 0; i < 8; i++) {
		cin >> tab[i];
	}
	for (int i = 0; i < 8; i++) {
		if ((i%2) == 0) {
			srednia_p += tab[i];
		}
		else
			srednia_n += tab[i];
	}
	cout << "Srednia przystych: " << srednia_p / 4 << " Srednia nieparzystych: " << srednia_n / 4;
}
