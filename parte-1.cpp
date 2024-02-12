#include "trick.h"

int main() {
    char choose;
    char chs;
    double result;
    int a;
    int b;
    const double PI = 3.14159; 
    double raio;

    cout << "Escolha entre Calculador -> 1 ou Calcular área de circulo -> 2" << endl;
    cin >> chs;

    switch (chs) {
    case '1':
        cout << "Escolha entre +, -, *, /, % " << endl;
        cin >> choose;
        cout << "Escolha um número: ";
        cin >> a;
        cout << "Escolha outro número: ";
        cin >> b;
        break;
    case '2':
        cout << "Qual o raio do círculo? ";
        cin >> raio;
        result = PI * (raio * raio) ;
        cout << "A área do círculo é: " << result << endl;
        return 0; 
    default:
        cout << "Opção inválida!" << endl;
        return 1;
    }

    switch (choose) {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if (b != 0) {
            result = a / b;
        } else {
            cout << "Erro: Divisão por zero!" << endl;
            return 1;
        }
        break;
    case '%':
        if (b != 0) {
            result = a % b;
        } else {
            cout << "Erro: Divisão por zero!" << endl;
            return 1;
        }
        break;
    default:
        cout << "Operador inválido!" << endl;
        return 1;
    }

    cout << "Resultado: " << result << endl;

    return 0;
}
