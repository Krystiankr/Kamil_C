#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	printf("Zadanie 2\n");
	int* ptr;
	int n;
	printf("Podaj rozmiar tablicy: ");
	cin >> n;
	ptr = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		ptr[i] = i * 10;
	}
	for (int i = 0; i < n; i++)
		cout << *(ptr + i) << " ";
	free(ptr);
}
