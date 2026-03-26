#include <stdio.h>

int procuraValor(int v[], int tam, int val);

int procuraValor(int v[], int tam, int val)
{
    for (int i = 0; i < tam; i++)
    {
        if (*v == val)
            return i;
        v++;
    }
    return -1; // Não encontrado
}

int main()
{
    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    int pos = procuraValor(vet, 10, valor);
    if (pos == -1)
        printf("Valor não encontrado!\n");
    else
        printf("Valor encontrado na posição %d\n", pos);
}