#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;


int main() {
	printf("Program sumuje liczby parzyste od 1 do 100\n");
	int suma=0;
	int i = 1;
	do 
		if (i % 2 == 0) suma += i;
	while ((i++) < 100);
	printf("Suma liczb parzystych to: %d", suma);
	
}
