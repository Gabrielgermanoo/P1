#include <stdio.h>

int main()
{
    int programas, linhas, aux = 1, x = 0, y = 0, maior = 0, aux1 = 1, igual = 1;
    char dia;
    while (aux <= 7)
    {
        scanf("%d%d", &programas, &linhas);
        if (linhas >= 100)
        {
            y++;
            if (linhas >= maior)
            {
                maior = linhas;
                igual++;
                aux1 = aux;
            }
        }
        if (programas >= 5)
        {
            x++;
        }
        aux += 1;
    }
    printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", x);
    printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", y);

    if (aux1 == 1)
    {
        printf("DIA QUE MAIS PRODUZIU: DOMINGO");
    }
    else if (aux1 == 2)
    {
        printf("DIA QUE MAIS PRODUZIU: SEGUNDA");
    }
    else if (aux1 == 3)
    {
        printf("DIA QUE MAIS PRODUZIU: TERCA");
    }
    else if (aux1 == 4)
    {
        printf("DIA QUE MAIS PRODUZIU: QUARTA");
    }
    else if (aux1 == 5)
    {
        printf("DIA QUE MAIS PRODUZIU: QUINTA");
    }
    else if (aux1 == 6)
    {
        printf("DIA QUE MAIS PRODUZIU: SEXTA");
    }
    else if (aux1 == 7 || igual == 7)
    {
        printf("DIA QUE MAIS PRODUZIU: SABADO");
    }
}