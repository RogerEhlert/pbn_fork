#include <stdio.h>

void exibeVetor(int vet[], int tam);
void ordenaVetor(int vet[], int tam);

void exibeVetor(int vet[], int tam)
{
    for (int i = 0; i < tam; i++)
        printf("%d ", vet[i]);
    printf("\n");
}

void ordenaVetor(int vet[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        int *p1 = vet;
        int *p2 = p1 + 1;
        for (int j = 0; j < tam - i - 1; j++)
        {
            if (*p1 > *p2) // v[j] > v[j+1]
            {
                int temp = *p1; // v[j]
                *p1 = *p2;      // v[j] = v[j+1]
                *p2 = temp;     // v[j+1] = temp;
            }
            p1++;
            p2++;
        }
    }
}

int main()
{
    int v[] = {3, 1, 7, 8, 4, 6, 12, 0, 4, 2};
    exibeVetor(v, 10);
    ordenaVetor(v, 10);
    exibeVetor(v, 10);
}