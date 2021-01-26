#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

void wyswietlaj(int n) {
	for (int i = 1; i <= n; i++) {
		printf("%d, ", i);
	}
}

int main() {
	printf("Program wyswietla liczby calkowite od 1 do %d\n",20);

	wyswietlaj(20);
}
