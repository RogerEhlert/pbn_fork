#include <stdio.h>

void incArray(int v[]);
void exibeVetor(int vet[], int tam);

void incArray(int v[])
{
    for (int c = 0; c < 10; c++)
        v[c]++;
}

void exibeVetor(int vet[], int tam)
{
    for (int i = 0; i < tam; i++)
        printf("%d ", vet[i]);
    printf("\n");
}

int main()
{
    int b = 200;
    int f = 500;
    int *a = NULL; // Ponteiro explicitamente NULO
    if (a == NULL)
        printf("Atenção! Ponteiro não inicializado\n");
    // a = (int *)14; // Ponteiro inválido!!!
    a = &b;
    printf(" b: %d\n", b);
    printf("&b: %p\n", &b);
    printf(" a: %p\n", a);
    printf("*a: %d\n", *a);
    a = &f;
    printf("*a: %d\n", *a);
    *a = 250;
    printf("*a: %d\n", *a);
    printf(" f: %d\n", f);

    printf("\n");
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    exibeVetor(data, 10);
    incArray(data);
    exibeVetor(data, 10);

    // Aritmética de ponteiros
    char c[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    char *p = c;
    printf("%c\n", *p);   // exibe o primeiro elemento do array
    printf("%c\n", p[0]); // idem

    printf("%p\n", p);     // exibe o endereço do primeiro elemento
    printf("%p\n", c);     // idem
    printf("%p\n", &c[0]); // idem

    printf("\n");
    printf("%c\n", *p);       // exibe 'a'
    printf("%c\n", *(p + 1)); // exibe 'b'
    printf("%c\n", *(p + 2)); // exibe 'c'
    printf("%c\n", *(p + 3)); // exibe 'd'

    int m[] = {3, 2, 1, 4, 5, 6, 9, 8, 7, 10};
    printf("\n");
    printf("m:     %p\n", m);     // end. do primeiro elem., e.g. 0x7fff5fbfebf8
    printf("&m[0]: %p\n", &m[0]); // idem
    printf("m+1:   %p\n", m + 1); // end. do segundo elem., e.g. 0x7fff5fbfebfc
    printf("&m[1]: %p\n", &m[1]); // idem
}