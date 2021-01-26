#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;


int main() {
	printf("Program sumuje liczby parzyste od 1 do 100\n");
	int suma=0;
	int i = 1;
	while ((i++) < 100) {
		if (i % 2 == 0) suma += i;
	}
	printf("Suma liczb parzystych to: %d", suma);
	
}
