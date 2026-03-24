#include<stdio.h>

int main() {

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueProdutoA = 1000;
    unsigned int estoqueProdutoB = 2000;

    float valorProdutoA = 10.50;
    float valorProdutoB = 20.50;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    printf("O %s tem estoque de %u e o valor unitario é R$ %.2f\n", produtoA, estoqueProdutoA, valorProdutoA);
    printf("O %s tem estoque de %u e o valor unitario é R$ %.2f\n", produtoB, estoqueProdutoB, valorProdutoB);

    printf("O %s tem estoque de %d\n",produtoA, estoqueProdutoA > estoqueMinimoA);
    printf("O %s tem estoque de %d\n",produtoB, estoqueProdutoB > estoqueMinimoB);

    valorTotalA = (estoqueMinimoA + estoqueProdutoA) * valorProdutoA;
    valorTotalB = (estoqueMinimoB + estoqueProdutoB) * valorProdutoB;

    printf("O valor total do %s é R$ %.2f\n", produtoA, valorTotalA);
}