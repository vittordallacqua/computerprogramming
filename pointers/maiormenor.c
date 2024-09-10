#include <stdio.h>

void maiormenor(int vet[], int n, int *maior, int *menor){
    for(int i =0;i<n;i++){
        if(*maior<vet[i]){
            *maior = vet[i];
        }
        if(*menor>vet[i]){
            *menor = vet[i];
        }
    }
}

int main() {
    
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    int vet[n];
    for(int i;i<n;i++){
        printf("Número %d:",i+1);
        scanf("%d",&vet[i]);
    }
    int maior = -9999, menor = 9999;
    maiormenor(vet,n,&maior,&menor);
    printf("O maior número do vetor é o %d, e o menor é o %d.",maior,menor);

    return 0;
}