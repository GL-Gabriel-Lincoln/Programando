/*Desenvolva o código em C de um programa que imprime na tela um
menu onde o usuário poderá escolher entre: (1) Opção 1, (2) Opção
2, (3) Opção 3, (4) sair. Caso a opção (4) seja escolhida o programa
deve encerrar. Caso qualquer outra opção seja escolhida o programa
deve imprimir na tela o menu novamente.*/

#include <stdio.h>

int main() {

int x = 0;

while (x != 4) {

    printf("Ditige a opção que quer:\n (1) Opção 1\n (2) Opção 2\n (3) Opção 3\n (4) sair\n");
    scanf("%d", &x);

}

return 0;
}