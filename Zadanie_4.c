#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	printf("Zadanie 3\n");

	srand(time(NULL));
	int tab[10];
	int max = -999;
	for (int i = 0; i < 10; i++)
		tab[i] = rand()%17+4;
	for (int i = 0; i < 10; i++) {
		if (tab[i] > max) max = tab[i];
	}
	cout << "Max: " << max;
}
