#include <iostream>

using namespace std;

int main() {
    const int PRECIO_HELADO = 5; // Precio del helado
    int dinero = 50; // Cantidad de dinero que tenemos

    cout << "Dinero disponible: $" << dinero << endl;
    cout << "Precio del helado: $" << PRECIO_HELADO << endl;

    while (dinero >= PRECIO_HELADO) {
        dinero -= PRECIO_HELADO; // Restamos el precio del helado al dinero disponible
        cout << "Se compró un helado" << endl;
        cout << "Te quedan $" << dinero << " para comprar helados" << endl;
    }

    cout << "Ya no te queda dinero para comprar más helados" << endl;

    return 0;
}

