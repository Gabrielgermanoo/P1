#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double percurso;
    char carro[2];
    scanf("%lf%s", &percurso, &carro);
    if ((strcmp(carro, "A") == 0))
    {
        percurso /= 12.0;
        printf("%.2lf", percurso);
    }
    else if ((strcmp(carro, "B") == 0))
    {
        percurso /= 9.0;
        printf("%.2lf", percurso);
    }
    else if ((strcmp(carro, "C") == 0))
    {
        percurso /= 8.0;
        printf("%.2lf", percurso);
    }
    else
    {
        printf("Tipo inválido!");
    }
    return 0;
}