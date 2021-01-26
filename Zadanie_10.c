#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

void wyswietlZnak(int n, char ch) {
	for (int i = 0; i < n; i++) {
		printf("%c ", ch);
	}
}

int main() {
	printf("Program wyswietla znak S 10 razy\n");
	wyswietlZnak(10, 'S');
}
