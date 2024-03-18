/*Desenvolva um programa em C que lê um número do teclado e
verifica se ele é primo ou não.*/

#include <stdio.h>

int main() {

int n;

printf("Digite o valor de n: ");
scanf("%d", &n);
if (n <= 1) {

    printf("%d não é primo\n", n);

    return 0;
    
} else {

    if (n == 2) {

            printf("%d é primo\n", n);

            return 0;
            
    } else {
    
        for(int i = 2; i < n; i++) {
        
            if (n % i == 0) {

                printf("%d não é primo\n", n);

                return 0;

            } else {
                
                printf("%d é primo\n", n);

                return 0;

            }
        }
    }
}

return 0;
}