/*Desenvolva o código em C para calcular o IMC (índice de massa
corpórea) de uma pessoa (peso/altura²).*/

#include <stdio.h>

int main(){

float BMI;
float weight;
float height;

weight = 115;
height = 1.95;

BMI = (weight/(height * height));

printf("BMI: %f\n", BMI);

return 0;

}

