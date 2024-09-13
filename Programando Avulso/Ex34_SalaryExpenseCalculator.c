/*Suponha uma empresa com 5 funcionários onde cada um tem um 
salário de 100, 50, 50, 120 e 30 reais respectivamente. Quanto a 
empresa gasta em salários no total?*/

#include <stdio.h>

int main() {
float salarios[5] = {100.0, 50.0, 50.0, 120.0, 30.0};

float gastoTotal = 0.0;

for (int i = 0; i < 5; i++)
{
    gastoTotal += salarios[i];
}

printf("O gasto total da empresa com salários é: R$%.2f\n", gastoTotal);

return 0;
}