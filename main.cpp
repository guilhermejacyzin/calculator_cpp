#include <iostream>
#include <iomanip>  // Para formatação decimal
#include <locale>   // Para suporte a acentuação

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    double num1, num2;
    char op;
    char continuar;

    do {
        // Exibe o menu de operações
        cout << "\n===== CALCULADORA SIMPLES =====\n";
        cout << "Escolha a operacao (+, -, *, /):";
        cin >> op;

        cout << "Digite o primeiro numero:";
        cin >> num1;
        cout << "Digite o segundo numero:";
        cin >> num2;

        cout << fixed << setprecision(2);  // Define 2 casas decimais

        // Realiza o cálculo conforme a operação escolhida
        switch (op) {
        case '+': cout << "Resultado: " << num1 + num2 << endl; break;
        case '-': cout << "Resultado: " << num1 - num2 << endl; break;
        case '*': cout << "Resultado: " << num1 * num2 << endl; break;
        case '/':
            if (num2 == 0)
                cout << "Erro: divisao por zero!" << endl;
            else
                cout << "Resultado: " << num1 / num2 << endl;
            break;
        default:
            cout << "Operacao invalida!" << endl;
        }

        // Pergunta se o usuário deseja continuar
        cout << "\nDeseja fazer outra operacao? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "\nObrigado por usar a calculadora!\n";

    return 0;
}
