/*Faça um programa que leia um vetor de 10 posições do usuário. No 
final, o programa deve exibir o maior e o menor elemento do vetor. 
Além disso, o programa também deve exibir a soma dos números 
pares, a soma dos números ímpares e a soma dos números primos do 
vetor.*/

#include <stdio.h>

int main() {

int v[10];
int valorMaior;
int valorMenor;
int somaDosPares = 0;
int somaDosImpares = 0; 
int somaDosPrimos = 0;

for (int i = 0; i < 10; i++){
    printf("Digite o valor da posição vetor[%d]: ", i+1);
    scanf("%d", &v[i]);
}

valorMaior = v[0];
valorMenor = v[0];

for (int i = 0; i < 10; i++) {
    if (v[i] > valorMaior) {
        valorMaior = v[i]; 
    }
    if (v[i] < valorMenor) {
        valorMenor = v[i]; 
    }
    if (v[i] % 2 == 0) {
        somaDosPares += v[i];
    }
    if (v[i] % 2 == 1) {
        somaDosImpares += v[i];
    }
}

for (int i = 0; i < 10; i++) {
        int num = v[i];
        int ehPrimo = 1;

        if (num <= 1) {
            ehPrimo = 0;
        } else {

            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    ehPrimo = 0;
                    break;
                }
            }
        }

        if (ehPrimo) {
            somaDosPrimos += num;
        }
}

    printf("O maior valor do vetor é: %d\n", valorMaior);
    printf("O menor valor do vetor é: %d\n", valorMenor);
    printf("A soma dos números pares é: %d\n", somaDosPares);
    printf("A soma dos números ímpares é: %d\n", somaDosImpares);
    printf("A soma dos números primos é: %d\n", somaDosPrimos);

return 0;
}