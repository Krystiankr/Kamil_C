#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	printf("Prosze o podanie liczby do obliczenia silni\n");
	int n,suma=1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		suma *= i;
	}
	printf("Twoj wynik to: %d", suma);
}
