#include <stdio.h>

int main()
{
    int dia, estudante, socio;
    double valor;
    scanf("%d%d%d", &dia, &estudante, &socio);
    valor = 15.00;
    if ((dia >= 1) && (dia <=4))
    {
        if (estudante == 0)
        {
            printf("COMUM: %.2lf", valor);
        }
        else if (estudante == 1 && socio == 0)
        {
            valor *= 0.7;
            printf("ESTUDANTE: R$ %.2f", valor);
        }
        else if (socio == 1 && estudante == 0)
        {
            printf("SOCIO: %.2lf", valor);
        }
    }
    else
    {
        valor *= 2.0;
        if (estudante == 1)
        {
            valor *= 0.7;
            printf("ESTUDANTE: R$ %.2lf", valor);
        }
        else if (socio == 1)
        {
            valor *= 0.8;
            printf("SOCIO: R$ %.2lf", valor);
        }
        else if (estudante == 0 && socio == 0)
        {
            printf("COMUM: R$ %.2lf", valor);
        }
    }
    return 0;
}