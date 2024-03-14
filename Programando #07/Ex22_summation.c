/*Desenvolva o código em C de um programa que solicita um número
inteiro n do usuário e então imprime na tela o resultado da somatória
de todos os números de 0, 1, 2, ..., n, como a fórmula a seguir:
n
Somatorio i
i=0*/

#include <stdio.h>

int main() {

int n = 0;
int result = 0;

printf("Digite o valor de n: ");
scanf("%d", &n);

while (n >= 0){

    result += n;
    
    n--;

}

printf("Resultado: %d\n", result);

return 0;
}