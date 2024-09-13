/*Construa um programa em C que recebe um vetor V de 5 elementos 
do usuário e imprime na tela o maior elemento do vetor.*/

#include <stdio.h>

int main(){

int v[5];
int valorMaior;

for (int i = 0; i < 5; i++) {
    printf("Digite o %d° valor: ", i+1);
    scanf("%d", &v[i]);
}

printf("\nValores que estão no vetor:\n");

for (int i = 0; i < 5; i++){
    printf("%d ", v[i]);
}

printf("\n");

valorMaior = v[0];
 
    for (int i = 1; i < 5; i++) {
        if (v[i] > valorMaior) {
            valorMaior = v[i]; 
        }
    }

printf("\nValor maior do vetor: %d\n", valorMaior);

return 0;

}