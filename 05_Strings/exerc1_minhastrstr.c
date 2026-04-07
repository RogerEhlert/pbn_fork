#include <stdio.h>
#include <string.h>

char* minha_strstr(char* string, char* substring);
char* minha_strstr_pont(char* string, char* substring);

char* minha_strstr(char* string, char* substring)
{
    int tam_str = strlen(string);
    int tam_sub = strlen(substring);
    for(int pos1=0; pos1<=tam_str-tam_sub; pos1++) {
        char achei = 1;
        for(int pos2=0; pos2<tam_sub; pos2++) {
            //printf("%c <-> %c\n", string[pos1+pos2], substring[pos2]);
            if(string[pos1+pos2] != substring[pos2]) {
                achei = 0; // indica que não encontrou
                break;
            }
        }
        if(achei == 1) { // ou if(achei)
           // encontrou a substring!
           // retorna o ponteiro (início da string + deslocamento)
           return string+pos1;  
        }
    }
    // não encontrou...
    return NULL; // ou return 0
}

char* minha_strstr_pont(char* string, char* substring)
{
    char *p1, *p2;
    p1 = string;
    while(*p1 != '\0') { // while (*p1)
        char achei = 1;
        p2 = substring;
        char* aux = p1; // aux vai "andar", p1 fica fixo
        while(*p2 != '\0') {
            if(*aux != *p2) {
                achei = 0; // indica que não encontrou
                break;
            }
            aux++;
            p2++;
        }
        if(achei == 1) { // ou if(achei)
           // encontrou a substring!
           // retorna o ponteiro (início da string + deslocamento)
           return p1;  
        }
        p1++;
    }
    // não encontrou...
    return NULL; // ou return 0
}

int main()
{
    char *str1 = "minha string legal demais";
    char *str2 = "str";
    //char *pos = minha_strstr(str1, str2);
    char *pos = minha_strstr_pont(str1, str2);
    if(pos == NULL)
        printf("Não encontrada!\n");
    else
        printf("Substring encontrada: %s\n", pos);
    return 0;
}
