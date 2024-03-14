/*Desenvolva o código em C de um programa em que o usuário informa
a nota de 𝑛 alunos e o programa conta quantos alunos foram
aprovados (nota ≥ 6) e quantos alunos foram reprovados (nota < 6).*/

#include <stdio.h>

int main() {

int nAlunos;
int quantidadeDeAlunosAprovados = 0;
int quantidadeDeAlunosReprovados = 0;
int nota;
int i = 0;

printf("Digite a quantidade de alunos: ");
scanf("%d", &nAlunos);

while(i < nAlunos) {

    printf("Digite a nota do aluno %d: ", i+1);
    scanf("%d", &nota);

    if (nota >= 6) {

        quantidadeDeAlunosAprovados++;

    } else if (nota < 6) {

        quantidadeDeAlunosReprovados++;

    }

    i++;
}

printf("Quantidade de alunos aprovados: %d\n", quantidadeDeAlunosAprovados);
printf("Quantidade de alunos reprovados: %d\n", quantidadeDeAlunosReprovados);

return 0;
}