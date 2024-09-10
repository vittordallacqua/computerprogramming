#include <stdio.h>


void calcularReajuste(float *preco, float percentual, float *valorReajuste) {
    *valorReajuste = *preco * (percentual / 100);  
    *preco = *preco + *valorReajuste;    
}

int main() {
    float preco, percentual, valorReajuste;
    
    printf("Digite o preco atual do produto: ");
    scanf("%f", &preco);
    
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentual);
    
    calcularReajuste(&preco, percentual, &valorReajuste);
    
    printf("Valor do reajuste: %.2f\n", valorReajuste);
    printf("Preco reajustado: %.2f\n", preco);
    
    return 0;
}
