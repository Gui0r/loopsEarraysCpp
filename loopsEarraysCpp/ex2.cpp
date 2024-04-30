#include <iostream>
#include <locale.h>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char array[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int i = 0;

    while (i < 6)
    {
        cout << array[i] << " ";
        i++;
    }
    cout << "\n";

    return 0;
    
}