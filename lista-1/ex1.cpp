#include <iostream>
#include <string>
using namespace std;

void escreveNaTela(string texto) {
    cout << texto;
}

int main() {
    string texto;
    
    cout << "Escreva um texto: ";
    getline(cin, texto);
    escreveNaTela(texto);

    return 0;
}