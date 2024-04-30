#include <iostream>
#include <locale.h>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int array[7] = {1, 2, 3, 4, 5, 6, 7};

    for(int i = 0; i < 7; i++){
        if(array[i] % 2 == 0){
            cout << array[i] << " ";
        }
    }
    cout << "\n";

    return 0;
}

/*
if(array[0] % 2 == 0){
            cout << array[0];
        }else if (array[1] % 2 == 0)
        {
           cout << array[1];
        }
*/