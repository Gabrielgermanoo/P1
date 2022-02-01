#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char nome[255];
    int tam;
    scanf("%254[^\n]", nome);
    tam = strlen(nome);
    for (int i = tam - 1; i >= 0; i--)
    {

        printf("%c", nome[i]);
    }
    return 0;
}