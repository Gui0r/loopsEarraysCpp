#include <iostream>
#include <locale.h>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int array[8] = {3, 7, 9, 12, 4, 6, 8, 10};

    cout << array[2] << "\n";

    int soma = array[5] + array[7];

    cout << soma << "\n";

    cout << array[1] - array[0] << "\n";

    if(array[5] > 6){
        cout << array[5] << "\n";
    }

    if(array[7] % 2 == 0){
        cout << array[7] << "\n";
    }

    if (array[0] = array[3] + array[7])
    {
        cout << array[0] << "\n";
    }
    




}