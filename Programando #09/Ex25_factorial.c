/*Desenvolva o código em C de um programa que recebe uma variável
inteira 𝑛 e imprime na tela o valor de 𝑛!*/

#include <stdio.h>

int main() {

int n = 0;
int result = 1;

printf("Digite o valor de n: ");
scanf("%d", &n);

while (n >= 1){

    result *=  n;
 
    n--;
    
}

printf("Resultado de n!: %d\n", result);

return 0;
}