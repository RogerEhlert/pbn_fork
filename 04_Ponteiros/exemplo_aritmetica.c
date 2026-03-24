#include <stdio.h>

void func1()
{
    int vet[] = {4, 9, 12};
    int i, *ptr;
    ptr = vet;
    // Funciona, pois estamos acessando o conteúdo
    // apontado por ptr E incrementando ptr ("andando"
    // pelo vetor)
    for (i = 0; i < 3; i++)
        printf("%d ", *ptr++);
    printf("\n");
}

void func2()
{
    int vet[] = {4, 9, 12};
    int i, *ptr;
    ptr = vet;
    // Aqui o erro é incrementar o CONTEÚDO apontado
    // por ptr, e não o ponteiro em si ("andar" no vetor)
    for (i = 0; i < 3; i++)
        printf("%d ", (*ptr)++);
    printf("\n");
}

int main()
{
    func1();
    // func2();
}