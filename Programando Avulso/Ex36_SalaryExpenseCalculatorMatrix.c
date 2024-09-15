/*Seja uma empresa dividida entre departamento de compras e 
departamento de vendas. Cada um dos departamentos contam com 3 
funcionários. Os funcionários do departamento de compras possuem 
salários de 100, 50 e 50 reais respectivamente. Os funcionários do 
departamento de vendas possuem salários de 120, 30 e 20 
respectivamente. Quanto a empresa gasta em salários no total?*/

#include <stdio.h>
int main(){
int salarios[2][3];
int gastoTotal = 0;

salarios[0][0] = 100;
salarios[0][1] = 50;
salarios[0][2] = 50;

salarios[1][0] = 120;
salarios[1][1] = 30;
salarios[1][2] = 20;

for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        gastoTotal += salarios[i][j];
    }
}

printf("Gasto total: %d\n", gastoTotal);

return 0;

}


