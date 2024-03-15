/*Desenvolva um programa em C que calcula o resultado da seguinte
fórmula:
 n     n
 ∑ i + Π √i
i=1   i=1*/

#include <stdio.h>
#include <math.h>

int main() {

int n = 0;
int resultSummation = 0;
double resultMultiplicand = 1;
double result = 0;

printf("Digite o valor de n: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++) {

    resultSummation += i;

}

for(int i = 1; i <= n; i++) {
    
    resultMultiplicand *= sqrt(i);

}

result = resultSummation + resultMultiplicand;

printf("Resultado: %f\n", result);

return 0;
}