#include <iostream>
#include <locale.h>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int array[8] = {27, 13, 11, 12, 5, 15, 30, 9};

    for(int i = 0; i < 8; i++){
        if(array[i] / 3 && array[i] > 10){
            cout << array[i] <<  "\n";
        }
    }

    return 0;
}