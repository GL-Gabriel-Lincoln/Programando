/*Escreva um programa em C que leia o valor de duas variáveis inteiras
a e b e troque o valor delas. Ou seja, o valor de a deve ser igual ao
valor de b e o valor de b deve ser igual ao valor de a. O programa
deve imprimir os valores atualizados das variáveis na tela.*/

#include <stdio.h>

int main() {

int a;
int b;
int auxiliary;

printf("Digite o valor de a: ");
scanf("%d", &a);

printf("Digite o valor de b: ");
scanf("%d", &b);

auxiliary = a;
a = b;
b = auxiliary;

printf("A: %d\n", a);
printf("B: %d\n", b);

return 0;
}