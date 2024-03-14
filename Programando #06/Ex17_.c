/*Faça um programa que leia três números inteiros e exiba-os em
ordem crescente.*/

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

if (x < y && x < z && y < z) {

    printf("%d, %d, %d\n", x, y, z);
    
} else if (x < y && x < z && z < y) {

    printf("%d, %d, %d\n", x, z, y);

} else if (y < x && y < z && x < z) {

    printf("%d, %d, %d\n", y, x, z);
       
} else if (y < x && y < z && z < x) {

    printf("%d, %d, %d\n", y, z, x);
       
} else if (z < x && z < y && x < y) {

    printf("%d, %d, %d\n", z, x, y);

} else if (z < x && z < y && y < x) {

    printf("%d, %d, %d\n", z, y, x);

}

return 0;
}