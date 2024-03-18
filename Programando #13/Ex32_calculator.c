/*Faça um programa em C que simule uma calculadora simplificada. O
programa deve exibir um menu que possibilite o usuário a escolher
entre as operações de soma, subtração, multiplicação, divisão e sair.
Caso a opção sair seja escolhida, o programa encerra. Caso qualquer
outra opção seja escolhida, o programa irá pedir ao usuário dois
operandos e realizar a respectiva operação.*/

#include <stdio.h>


void scanAB(int* a, int* b) {

    printf("Digite o valor de a: ");
    scanf("%d", a);

    printf("Digite o valor de b: ");
    scanf("%d", b);

}


int main() {

int option = 0;
int a;
int b;
int result;


    while (option != 5) {

        printf("Digite a opção que deseja fazer a operação:\n Opção 1 '+'\n Opção 2 '-'\n Opção 3 '*'\n Opção 4 '/'\n Opção 5 'Sair'\n");
        scanf("%d", &option);

        if (option == 1) {

            scanAB(&a, &b);

            result = a + b;

            printf("%d + %d = %d\n", a, b, result);


        } else if (option == 2) {

            scanAB(&a, &b);
            
            result = a - b;

            printf("%d - %d = %d\n", a, b, result);
            



        } else if (option == 3) {

            scanAB(&a, &b);

            result = a * b;

            printf("%d * %d = %d\n", a, b, result);
            
        } else if (option == 4) {

            scanAB(&a, &b);

            result = a / b;

            printf("%d / %d = %d\n", a, b, result);
            
        }
    }

return 0;
}