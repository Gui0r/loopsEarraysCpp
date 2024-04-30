#include <iostream>
#include <locale.h>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float array[5];
    float array2[5];
    int soma;
    int peso;
    int mediaP;

    for(int i = 0; i < 5; i++){
        cout << "Digite suas notas: ";
        cin >> array[i];
    }
    for(int a = 0; a < 5; a ++){
        cout << "Digite o peso de suas notas: ";
        cin >> array2[a];
    }

    cout << "\n";
    soma = (array[0] * array2[0]) + (array[1] * array2[1]) + (array[2] * array2[2]) + (array[3] * array2[3]) + (array[4] * array2[4]);
    peso = (array2[0] + array2[1] + array2[2] + array2[3] + array2[4]);

    mediaP = (soma / peso);

    cout << mediaP;
}