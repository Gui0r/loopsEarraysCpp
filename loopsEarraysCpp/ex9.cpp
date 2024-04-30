#include <iostream>
#include <locale.h>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int array[10] = {3, 7, 9, 12, 4, 6, 8, 10, 7, 8};
    int soma;
    
    soma = array[0] + array[1];

    for(int i = 2; i < 10; i++){
       soma = array[i] + soma; 
    }

    cout << soma;
}