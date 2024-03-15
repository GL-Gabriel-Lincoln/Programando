/*Desenvolva um programa que imprime na tela “branco” e “cinza”
alternadamente 𝑛 vezes.*/

#include <stdio.h>

int main() {

int n;
int i = 0;

printf("Digite o valor de n: ");
scanf("%d", &n);

while(i < n) {

    if(i % 2 == 0) {
        printf("branco\n");
    }
    else {
        printf("cinza\n");
    }
    i++;
} 

return 0;
}