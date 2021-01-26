#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	printf("Zadanie 5\n");
    int a, b;
    printf("Podaj liczbe wierszy: ");
    cin >> b;
    printf("Podaj liczbe kolumn: ");
    cin >> a;
    

    int** tab = (int**)malloc(b * sizeof(int*));
    for (int i = 0; i < b; i++) {
        tab[i] = (int*)malloc(a * sizeof(int));
        for (int g = 0; g < a; g++) {
            tab[i][g]=g*i;
        }
    }
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            cout << tab[i][j]<< " ";
        }
        cout << endl;
    }
}
