/*Faça um programa que leia três coordenadas (x, y) e informa se elas
formam um triângulo. Dica: é necessário calcular a distância entre
elas.*/

#include <stdio.h>
#include <math.h>

int main() {

int x1, y1;
int x2, y2;
int x3, y3;
int d12;
int d23;
int d13;

printf("Digite o valor de x1, y1: ");
scanf("%d %d", &x1, &y1);

printf("Digite o valor de x2, y2: ");
scanf("%d %d", &x2, &y2);

printf("Digite o valor de x3, y3: ");
scanf("%d %d", &x3, &y3);

d12 = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
d23 = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
d13 = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));

if ((d12 + d23 > d13) && (d12 + d13 > d23) && (d23 + d13 > d12)) {

    printf("As cordenadas formam um triângulo\n");

} else {

    printf("As cordenadas não formam um triângulo\n");
}

return 0;
}