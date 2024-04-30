#include <iostream>
#include <locale.h>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int array[10];

    for(int a = 0; a < 10; a++){
        cout << "Digite um número: ";
        cin >> array[a];
    }

    for(int i = 0; i < 10; i++){
        cout << array[i] << " ";
    }
}