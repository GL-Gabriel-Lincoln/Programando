/*Faça um programa que leia um número inteiro entre 1 e 7 e exiba o
dia da semana correspondente (1 - segunda-feira, 2 - terça-feira, etc.).*/

#include <stdio.h>

int main() {

int x;

printf("Digite um valor para x entre 1 a 7: ");
scanf("%d", &x);

if(x >= 1 && x <= 7){
    
    if (x == 1) {
        printf("%d - segunda-feira\n", x);
    } else if (x == 2){
        printf("%d - terça-feira\n", x); 
    } else if (x == 3){
        printf("%d - quarta-feira\n", x); 
    } else if (x == 4){
        printf("%d - quinta-feira\n", x); 
    } else if (x == 5){
        printf("%d - sexta-feira\n", x); 
    } else if (x == 6){
        printf("%d - sabado-feira\n", x); 
    } else if (x == 7){
        printf("%d - domingo-feira\n", x); 
    }

}

return 0;
}