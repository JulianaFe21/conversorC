#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float valor, taxa_conversao, valor_convertido;

    printf("Informe o valor em reais R$  ");
    scanf("%f", &valor);

    printf("Informe a taxa de conversao de reais para dolares  ");
    scanf("%f", &taxa_conversao);

    valor_convertido = valor * taxa_conversao;
    printf("Valor em reais: R$ %.f\nTaxa de conversao: %.2f\nValor convertido: US$: %.2f\n", valor, taxa_conversao,valor_convertido);


    return 0;
}
