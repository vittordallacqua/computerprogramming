#include <stdio.h>

void somaquadrados(int *x,int *y,int *z,int *soma){
    *x = *x * *x;
    *y = *y * *y;
    *z = *z * *z;
    *soma = *x + *y + *z;
}

int main() {
    
    int a,b,c,soma;
    printf("Digite 3 números: ");
    scanf("%d%d%d",&a,&b,&c);
    
    somaquadrados(&a,&b,&c,&soma);
    
    printf("Quadrados: %d,%d,%d\nSoma dos quadrados:%d",a,b,c,soma);
    
    return 0;
}
