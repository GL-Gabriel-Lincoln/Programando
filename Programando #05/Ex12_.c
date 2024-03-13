/*Desenvolva o pseudocódigo e o código em C de um programa que lê
duas variáveis inteiras x e y, compara os valores lidos e imprime todas
as relações verdadeiras entre elas (>, <, >=, <=, !=, ==).*/

#include <stdio.h>

int main() {

int x;
int y;

printf("Digite o valor de x: ");
scanf("%d", &x);

printf("Digite o valor de y: ");
scanf("%d", &y);

if (x > y){
    printf("%d é maior que %d\n", x, y);
}
if (x < y){
    printf("%d é menor que %d\n", x, y);
}
if (x >= y){
    printf("%d é maior ou igual a %d\n", x, y);
}
if (x <= y){
    printf("%d é menor ou igual a %d\n", x, y);
}
if (x != y){
    printf("%d é diferente de %d\n", x, y);
}
if (x == y){
    printf("%d é igual a %d\n", x, y);
}


return 0;
} 