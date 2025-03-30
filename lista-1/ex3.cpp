// Gabriel Guimarães Cunha - 30/03/2025

#include <iostream>
#include <string>
using namespace std;

void nomeFormatado(string nome, string sobrenome) {
    cout << sobrenome << ", " << nome;
}

int main() {
    string nome;
    string sobrenome;

    cout << "Digite o nome de uma pessoa: ";
    getline(cin, nome);
    cout << "Digite o sobrenome da mesma pessoa: ";
    getline(cin, sobrenome);
    nomeFormatado(nome, sobrenome);

    return 0;
}