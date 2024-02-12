#include "trick.h"

int main() {
    float notas[5];
    float soma = 0;
    float media = 0;
    float menorNota = 10; 
    float maiorNota = 0; 

    cout << "Digite as notas dos 5 alunos: " << endl;

    // Leitura das notas e cálculo da soma
    for (int i = 0; i < 5; i++) {
        cout << "Nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        soma += notas[i];

        // Verifica menor nota
        if (notas[i] < menorNota) {
            menorNota = notas[i];
        }

        // Verifica maior nota
        if (notas[i] > maiorNota) {
            maiorNota = notas[i];
        }
    }

    // Cálculo da média
    media = soma / 5;

    // Exibição da menor, maior nota e média
    cout << "Menor nota: " << menorNota << endl;
    cout << "Maior nota: " << maiorNota << endl;
    cout << "Média: " << media << endl;

    int numeros[10];

    cout << "Digite 10 números inteiros:" << endl;

    // Leitura dos valores para os elementos do array
    for (int i = 0; i < 10; i++) {
        cout << "Número " << i+1 << ": ";
        cin >> numeros[i];
    }

    // Encontrar o maior e o menor elemento do array
    int maiorElemento = numeros[0];
    int menorElemento = numeros[0];
    for (int i = 1; i < 10; i++) {
        if (numeros[i] > maiorElemento) {
            maiorElemento = numeros[i];
        }
        if (numeros[i] < menorElemento) {
            menorElemento = numeros[i];
        }
    }

    cout << "Maior elemento: " << maiorElemento << endl;
    cout << "Menor elemento: " << menorElemento << endl;

    return 0;
}
