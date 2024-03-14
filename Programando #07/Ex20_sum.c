/*Desenvolva o código em C de um programa que soma números
inteiros informados pelo usuário até que um número negativo seja
informado e então imprime o resultado da soma na tela.*/

#include <stdio.h>

int main() {

int x = 0;
int y = 0;

while(x >= 0){

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    if (x < 0){
        break;
    }


    y += x;
   
}

printf("%d é o resultdao da soma\n", y);

return 0;
}
