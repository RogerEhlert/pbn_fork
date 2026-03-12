#include <stdio.h>

int main()
{
    // a = 2147483647; // maior int com sinal de 32 bits
    int a = 0b01111111111111111111111111111111;
    printf("a: %u\n", a);
    unsigned int b = -1;
    printf("b: %u\n", b);

    float v = 1000000.35;
    printf("v: %f\n", v);
    v += 0.1;
    printf("v: %f\n", v);
}