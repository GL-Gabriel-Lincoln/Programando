/*Faça um programa que lê uma data no formato DD/MM/AA e verifica
se ela é válida. Desconsidere anos bissextos.*/

#include <stdio.h>

int main() {

int dia;
int mes;
int ano;

printf("Digite a data atual - DD MM AA: ");
scanf("%d %d %d", &dia, &mes, &ano);

if(dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12 && ano >= 1) {

    if(mes == 1 && mes == 3 && mes == 5 && mes == 7 && mes == 8 && mes == 10 && dia <= 31) {
        printf("Essa data é valida\n");
    } else if(mes == 4 && mes == 6 && mes == 9 && mes == 11 && dia <= 30) {
        printf("Essa data é valida\n");
    } else if(mes == 2 && dia <= 28) {
        printf("Essa data é valida\n");
    }
    else {

    printf("Essa data é invalida\n");

    }

} 


return 0;
}