#include <stdio.h>

void inverteVetor(int vet[], int tam);
void exibeVetor(int vet[], int tam);

void inverteVetor(int vet[], int tam)
{
    int *ptr1 = vet;
    int *ptr2 = vet + tam - 1;
    while (ptr1 < ptr2)
    {
        int tmp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = tmp;
        ptr1++;
        ptr2--;
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