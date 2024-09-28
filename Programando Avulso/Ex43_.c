/*Crie um programa que lê um vetor V com 10 posições de booleanos 
do usuário. O programa deve exibir a conversão da representação 
binária do vetor para um número decimal na tela.*/

#include <stdio.h>
#include <stdbool.h>

int main() {

bool V[10];
int temp; 

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor 0 ou 1 para posição vetor[%d]: ", i+1);
        scanf("%d", &temp); 
        
        if (temp == 0 || temp == 1) {
            V[i] = temp;  
        } else {
            printf("Valor inválido. Por favor, insira 0 ou 1.\n");
            i--;  
        }
    }

return 0;
}