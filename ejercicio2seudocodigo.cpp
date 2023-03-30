#include <iostream>
using namespace std;

int main() {
    int num, temp, digit, reversed = 0;
    cout << "Ingrese un numero entero: ";
    cin >> num;

    temp = num;

    // Reverse the number
    while (temp > 0) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    if (num == reversed) {
        cout << num << " es palindromo" << endl;
    } else {
        cout << num << " no es palindromo" << endl;
    }

    return 0;
}


