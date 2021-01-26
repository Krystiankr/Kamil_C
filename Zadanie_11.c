#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

void zamiana(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	printf("Program zmienia dwa argumenty typu int miejscami\n");
	int a = 10, b = 20;
	printf("Zmienna a: %d zmienna b: %d\n", a, b);
	zamiana(&a, &b);
	printf("*Zamiana*\n");
	printf("Zmienna a: %d zmienna b: %d\n", a, b);


}
