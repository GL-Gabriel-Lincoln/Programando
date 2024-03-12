/*Escreva um programa em C que calcule a idade de uma pessoa em
anos, meses e dias. O programa deve ler a data de nascimento da
pessoa (dia, mês e ano) e a data atual (dia, mês e ano) e imprimir a
idade na tela. Para este exercício, assuma que todos os meses
possuem exatamente 30 dias.*/

#include <stdio.h>

int main(){

int dayBirth;
int monthBirth;
int yearBirth;

int currentDay;
int currentMonth;
int currentYear;

int dayAge;
int monthAge;
int yearAge;



printf("Digite a sua data de nascimento - xx yy zzzz: ");
scanf("%d %d %d", &dayBirth, &monthBirth, &yearBirth);

printf("Digite a data atual - xx yy zzzz: ");
scanf("%d %d %d", &currentDay, &currentMonth, &currentYear);

if(dayBirth > 0 && dayBirth <= 30 && monthBirth > 0 && monthBirth <= 12 && yearBirth > 0 && currentDay > 0 && currentDay <= 30 && currentMonth > 0 && currentMonth <= 12 && currentYear > 0) {

dayAge = currentDay - dayBirth;
monthAge = currentMonth - monthBirth;
yearAge = currentYear - yearBirth;

    if(dayAge <= 0) {

        dayAge+= 30;
        monthAge--;
        
    }
    if(monthAge <= 0) {
        
        monthAge += 12;
        yearAge--;

    }
}

printf("Idade: %d ano(s), %d mes(es), %d dia(s)\n", yearAge, monthAge, dayAge);

return 0;   
}