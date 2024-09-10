#include <stdio.h>

/*Faça um programa para auxiliar a prof Malga a calcular a média das suas
turmas. Considere que cada turma tem um número diferente de aluno,
logo inicialmente solicite a prof. O numero de alunos. Após esse
informação informe as notas e em uma função calcule e retorne para a
prof. a média da turma, a melhor nota e a pior nota.
Informe também quantos alunos ficaram acima da média (6,0) e quantos
alunos ficaram abaixo da média*/

void calculo(float notas[], int n, float *melhor, float *pior, float *media){
    int i;
    float soma = 0.0;
    for(i=0;i<n;i++){
        soma+=notas[i];
        if(*melhor<notas[i]){
            *melhor = notas[i];
        }
        if(*pior>notas[i]){
            *pior = notas[i];
        }
    }
    *media = soma/n;
}

int main() {
    
    int nalunos;
    printf("Digite o número de alunos: ");
    scanf("%d",&nalunos);
    
    int i;
    float notas[nalunos];
    for(i=0;i<nalunos;i++){
        printf("Nota aluno %d:",i+1);
        scanf("%f",&notas[i]);
    }
    float media, melhor = -9999.0, pior = 99999.0;
    calculo(notas, nalunos, &melhor, &pior,&media);
    
    printf("A média da turma é %.2f\nA melhor nota é %.2f\nA pior nota é %.2f",media,melhor,pior);

    return 0;
}