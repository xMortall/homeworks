#include "trick.h"

void soma(int a, int b){
    cout << a + b << endl;
}
void multi(int a, int b){
    cout << a * b << endl;
}
void divi(int a, int b){
    if (b != 0)
        cout << a / b << endl;
    else
        cout << "Erro: Divisão por zero!" << endl;
}
void rest(int a, int b){
    if (b != 0)
        cout << a % b << endl;
    else
        cout << "Erro: Divisão por zero!" << endl;
}
void circu(double s, int r){ 
    const double PI = 3.14159; 
    s = PI * (r * r); 
    cout << s << endl;
}

void menu(){
    system(CLEAR_COMMAND);
    cout << "==========================" << endl;
    cout << "          MENU" << endl;
    cout << "==========================" << endl;
    cout << "1-soma" << endl;
    cout << "2-multiplicacao" << endl;
    cout << "3-divisao" << endl;
    cout << "4-resto da divisao" << endl;
    cout << "5-Calcular Área do Circulo" << endl;
    cout << "6-Nota dos Alunos" << endl;
    cout << "7-Tabuada" << endl;
    cout << "==========================" << endl;
}

int getOpcao(){
    int opcao;
    cout << "Digite a sua opcao: ";
    cin >> opcao;
    return opcao;
}

void executaCalculoC(int opcao, int x);

void executaCalculo(int opcao, int x, int y){
    switch (opcao){
        case 1: 
            soma(x,y);
            break;
        case 2:
            multi(x,y);
            break;
        case 3:
            divi(x,y);
            break;
        case 4:
            rest(x,y);
            break;
        default:
            break;
    }
}

int getValorX(){
    int x;
    cout << "Digite o Valor de x: ";
    cin >> x;
    return x;
}

int getValorY(){
    int y;
    cout << "Digite o Valor de y: ";
    cin >> y;
    return y;
}

int getRaio(){
    int r;
    cout << "Digite o valor do raio: ";
    cin >> r;
    return r;
}

void lerNotas(int opcao) {
    float notas[5];
    float soma = 0;
    float media = 0;
    float menorNota = 10; 
    float maiorNota = 0; 
    cout << "Digite as notas dos 5 alunos: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        soma += notas[i];  
        if (notas[i] < menorNota) {
            menorNota = notas[i];
        }
        if (notas[i] > maiorNota) {
            maiorNota = notas[i];
        }
    }
    media = soma / 5;
    cout << "Menor nota: " << menorNota << endl;
    cout << "Maior nota: " << maiorNota << endl;
    cout << "Média: " << media << endl;
    int numeros[10];
    cout << "Digite 10 números inteiros:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Número " << i+1 << ": ";
        cin >> numeros[i];
    }
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
}  

void tabuada(int n) {
    cout << "Tabuada de " << n << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

void executaCalculoC(int opcao, int x){
    switch(opcao){
        case 5:
            {
                double area;
                circu(area, x);
            }
            break;
        case 6:
        {
                lerNotas(x);
        }
        case 7:
        {
                tabuada(x);
        }
        default:
            break;
    }
}

int main(){
    int opcao;
    menu();
    opcao = getOpcao();

    if(opcao >= 1 && opcao <= 4){
        int x = getValorX();
        int y = getValorY();
        executaCalculo(opcao, x, y);
    } else if(opcao == 5) {
        int raio = getRaio();
        executaCalculoC(opcao, raio);
    } else if(opcao == 6){
        lerNotas(opcao);
    } else if(opcao == 7){
        int n;
        cout << "Digite um numero inteiro: ";
        cin >> n;
        tabuada(n);
    } else {
        cout << "Opção inválida!" << endl;
    }
    
    return 0;
}
