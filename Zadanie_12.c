#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;


int main() {
	printf("Program zwraca najmniejsza liczbe z tablicy jednowymiarowej\n");
	srand(time(NULL));
	int max = -99;
	int *ptr = (int*)malloc(100 * sizeof(int));
	for (int i = 0; i < 100; i++) {
		ptr[i] = rand() % 99 + 1;
		if (max < ptr[i]) max = ptr[i];
	}
	printf("Najwieksza wartosc z tablicy to: %d", max);
	free(ptr);
}
