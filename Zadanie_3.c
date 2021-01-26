#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	printf("Zadanie 3\n");
	printf("Podaj wartosc zmiennej: ");
	int* ptr;
	int a;
	cin >> a;
	ptr = &a;
	*ptr *= 2;
	cout << a;
}
