/*Faça um programa que leia dois números inteiros e informe se o
primeiro é múltiplo do segundo ou se o segundo é múltiplo do
primeiro.*/

#include <stdio.h>

int main() {

int x;
int y;

printf("Digite o valor de x: ");
scanf("%d", &x);

printf("Digite o valor de y: ");
scanf("%d", &y);

if (x % y == 0) {

    printf("%d é multiplo de %d\n", x, y);

} else if (y % x == 0) {

    printf("%d é multiplo de %d\n", y, x);

}

return 0;
}