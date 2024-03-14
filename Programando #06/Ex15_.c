/*Faça um programa que leia três números inteiros e exiba o maior
deles.*/

#include <stdio.h>

int main() {

int x;
int y;
int z; 

printf("Digite o valor de x: ");
scanf("%d", &x);

printf("Digite o valor de y: ");
scanf("%d", &y);

printf("Digite o valor de z: ");
scanf("%d", &z);

if (x > y && x > z) {

    printf("%d é maior que %d e %d\n", x, y, z);

} else if (y > x && y > z) {

    printf("%d é maior que %d e %d\n", y, x, z);

} else if (z > y && z > x) {
    
    printf("%d é maior que %d e %d\n", z, x, y);

}

return 0;
}