/*Escreva um programa em C que leia o valor do raio de um círculo e
calcule a circunferência e a área do círculo. A fórmula para calcular a
circunferência é: 2 * PI * raio e a fórmula para calcular a área é: PI *
raio * raio. O programa deve imprimir os resultados na tela.*/

#include <stdio.h>

#define PI 3.14

int main(){

float ray;
float area;
float circumference;

printf ("Enter the value of the radius: ");
scanf("%f",&ray);

circumference = 2 * PI * ray;
area = PI * (ray * ray);

printf ("Area: %f\n", area);
printf ("Circumference: %f\n", circumference);

return 0;
}