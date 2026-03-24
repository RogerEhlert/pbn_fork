#include <stdio.h>

void inverteVetor(int vet[], int tam);
void exibeVetor(int vet[], int tam);

void inverteVetor(int vet[], int tam)
{
    int pos1 = 0;
    int pos2 = tam - 1;
    while (pos1 < pos2)
    {
        int tmp = vet[pos1];
        vet[pos1] = vet[pos2];
        vet[pos2] = tmp;
        pos1++;
        pos2--;
    }
}

void exibeVetor(int vet[], int tam)
{
    for (int i = 0; i < tam; i++)
        printf("%d ", vet[i]);
    printf("\n");
}

int main()
{
    int dados[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    exibeVetor(dados, 10);
    inverteVetor(dados, 10);
    exibeVetor(dados, 10);
}