#include <iostream>
#include <locale.h>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float array[8] = {1.1, 1.2, 3.4, 4.4, 5.5, 8.6, 6.9, 7.7};
    int i = 0;

    while(i < 8){
        if (array[i] > 5.0)
        {
            cout << array[i] << " ";
            
        }
        i++;
    }
    cout << "\n";
    return 0;
}