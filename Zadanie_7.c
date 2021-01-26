#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	printf("Zadanie 6\n");
	
	float tab[6][3];
	for (int i = 0; i < 6; i++) {
		cin >> tab[i][0];
	}
	for (int i = 0; i < 6; i++) {
		tab[i][1] = tab[i][0] * tab[i][0];
		tab[i][2] = tab[i][0] * tab[i][0] * tab[i][0];
	}
	for (int i = 0; i < 6; i++) {
		cout << tab[i][0]<<" ";
	}
	cout << endl;	
	for (int i = 0; i < 6; i++) {
		cout << tab[i][1] << " ";
	}
	cout << endl;	
	for (int i = 0; i < 6; i++) {
		cout << tab[i][2] << " ";
	}
	cout << endl;
}
