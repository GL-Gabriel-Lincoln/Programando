/*Desenvolva um programa em C que lê um número do teclado
imprime na tela todos os divisores do número.*/

#include <stdio.h>

int main() {

int n;

printf("Digite o valor de n: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++) {

    if (n % i == 0) {

        printf("%d é divisor %d\n", i, n);

    }
}

return 0;

}