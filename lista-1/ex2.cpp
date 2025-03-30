#include <iostream>
#include <string>
using namespace std;

void dadosDoFuncionario(string nome, int diaNascimento, int mesNascimento, int anoNascimento, float salario, char ehChefe) {
    cout << "\nDADOS DO FUNCIONARIO";
    cout << "\nNome: " << nome;
    cout << "\nData de nascimento: " << diaNascimento << "/" << mesNascimento << "/" << anoNascimento;
    cout << "\nSalario: " << salario;
    cout << "\nEh chefe: " << ehChefe; 
}

int main() {
    string nome;
    int diaNascimento;
    int mesNascimento;
    int anoNascimento;
    float salario;
    char ehChefe;

    cout << "Digite o nome do funcionario: ";
    getline(cin, nome);
    cout << "Digite a data de seu nascimento (dia): ";
    cin >> diaNascimento;
    cout << "------------------------------- (mes): ";
    cin >> mesNascimento;
    cout << "------------------------------- (ano): ";
    cin >> anoNascimento;
    cout << "Digite o seu salario: ";
    cin >> salario;
    cout << "Ele eh chefe? [S para Sim | N para Nao]: ";
    cin >> ehChefe;
    dadosDoFuncionario(nome, diaNascimento, mesNascimento, anoNascimento, salario, ehChefe);

    return 0;
}