#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;


int main() {
	printf("Pierwsza liczba to ilosc liczb nastepne to liczby ciagu\n");
	int dlugosc_ciagu;
	cin >> dlugosc_ciagu;
	int suma = 0,temp;
	for (int i = 0; i < dlugosc_ciagu; i++) {
		cin >> temp;
		suma += temp;
	}
	printf("Suma ciagu to: %d", suma);
}
