#include <iostream>
#include <locale.h>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int array[5] = {1, 3, 5, 7, 8};

    for(int i = 0; i < 5; i++){
        cout << array[i]  << " ";
    }
    cout << "\n";

    return 0;
}