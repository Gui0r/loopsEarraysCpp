#include <iostream>
#include <locale.h>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int array[12] = {31, 13, 11, 12, 5, 15, 30, 9, 20, 10, 20, 10};

    int maximo = array[0];
    int minimo = array[0];

    for(int i = 0; i < 12; i++){
        if(array[i] > maximo){
            maximo = array[i];
            
        }
        if (array[i] < minimo){
            minimo = array[i];
        }
    }
    cout << "O valor maximo desse array é: " << maximo << "\n";
    cout << "O valor minimo desse array é: " << minimo;
    return 0;
}