/*Escreva um programa em C que calcule o perímetro e a área de um
retângulo de base 10 e altura 5 e imprima os resultados na tela.*/

#include <stdio.h>

int main() {

int perimeter;
int area;
int height = 5;
int base = 10;

perimeter = 2 * (base + height);
area = base * height;

printf("Perimeter: %d, Area: %d\n", perimeter, area);

return 0;

}