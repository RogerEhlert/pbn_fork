#include <stdio.h>

void maiormenor(int vet[], int tam, int *menor, int *maior);

void maiormenor(int vet[], int tam, int *menor, int *maior)
{
    *menor = *maior = vet[0];
    for (int pos = 0; pos < tam; pos++)
    {
        if (vet[pos] > *maior)
            *maior = vet[pos];
        if (vet[pos] < *menor)
            *menor = vet[pos];
    }
}

int main()
{
    int dados[10] = {500, 6, 12, 33, 80, 8, 56, 9, 10, 1};
    int menorValor, maiorValor;
    maiormenor(dados, 10, &menorValor, &maiorValor);
    printf("Menor valor no vetor: %d\n", menorValor);
    printf("Maior valor no vetor: %d\n", maiorValor);
}