#include <stdio.h>

void copiaVetor(int v1[], int v2[], int tam);
void exibeVetor(int v[], int tam);

void copiaVetor(int v1[], int v2[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        *v2 = *v1;
        v1++;
        v2++;
    }
}

void exibeVetor(int v[], int tam)
{
    for (int i = 0; i < tam; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main()
{
    int vet1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vet2[10];
    copiaVetor(vet1, vet2, 10);
    exibeVetor(vet1, 10);
    exibeVetor(vet2, 10);
}