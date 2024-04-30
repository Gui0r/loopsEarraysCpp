#include <iostream>
#include <locale.h>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float array[10];
    float soma;
    float media;

    for(int i = 0; i < 10; i++){
        cout << "Digite sua nota: ";
        cin >> array[i];
    }

    soma = array[0] + array[1] + array[2] + array[3] + array[4] + array[5] + array[6] + array[7] + array[8] + array[9];
    media = (soma / 10);
    cout << media;
}