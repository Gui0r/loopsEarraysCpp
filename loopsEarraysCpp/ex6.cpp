#include <iostream>
#include <locale.h>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char array[5] = {'a', 'b', 'c', 'd', 'c'};

    int tam = strlen(array);

    cout << tam;
} 