#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	printf("Zadanie 7\n");

	srand(time(NULL));
	int tab[100][50];

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 50; j++) {
			tab[i][j] = rand() % 100;
		}
	}
	int wiersz, kolumna;
	cout << "Podaj wiersz: ";
	cin >> wiersz;
	cout << "\nPodaj kolumna: ";
	cin >> kolumna;
	printf("Wartosc z wiersza %d i kolumny %d wynosi: %d", wiersz, kolumna, tab[wiersz][kolumna]);
}
