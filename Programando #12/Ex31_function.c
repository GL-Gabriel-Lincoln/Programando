/*Desenvolva um programa em C que calcule a seguinte fórmula:
𝑓 (𝑥) =            1, 𝑥 = 1
        2 + 𝑓(𝑥 − 1), 𝑥 > 1*/

#include <stdio.h>
int f(int x) {

        if(x == 1) {

                return 1;

        }
        else if (x > 1) {
                
                return 2 + f(x - 1);

        } else {

                return -1;

        }

}


int main() {

int x;
int result;

printf("Digite o valor de x: ");
scanf("%d", &x);

result = f(x);

printf ("f(%d) = %d\n", x, result);

return 0;
}