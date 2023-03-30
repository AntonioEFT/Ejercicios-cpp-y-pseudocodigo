#include <iostream>
using namespace std;

int main() {
    int decimal, resto, binario = 0, base = 1;

    cout << "Ingrese un numero decimal: ";
    cin >> decimal;

    while (decimal > 0) {
        resto = decimal % 2;
        binario += resto * base;
        base *= 10;
        decimal /= 2;
    }

    cout << "El numero binario es: " << binario << endl;

    return 0;
}

