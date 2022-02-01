#include <stdio.h>
#include <math.h>
int main () 
{
    double a, b, c, delta;
    double raiz1, raiz2;
    int raizi, raizii;
    scanf("%lf%lf%lf", &a, &b, &c);
    delta= pow(b, 2.0) - (4 * a * c);
    raiz1 = (-(b) + sqrt(delta))/(2 * a);
    raiz2 = (-(b) - sqrt(delta))/(2 * a);
    if (delta > 0)
    { 
        raizi = (-(b) + sqrt(delta))/(2 * a);
        raizii = (-(b) - sqrt(delta))/(2 * a);
        printf("Digite o coeficiente A:\n");
        printf("Digite o coeficiente B:\n");
        printf("Digite o coeficiente C:\n");
        printf("Primeira raiz: %d\n", raizi);
        printf("Segunda raiz: %d", raizii);

    }
    else if (delta == 0)
    {     
        printf("Digite o coeficiente A:\n");
        printf("Digite o coeficiente B:\n");
        printf("Digite o coeficiente C:\n");
        printf("Primeira raiz: %.1lf\n", raiz1);
        printf("Segunda raiz: %.1lf", raiz2);\
    }
    else 
    {
        printf("Digite o coeficiente A:\n");
        printf("Digite o coeficiente B:\n");
        printf("Digite o coeficiente C:\n");
        printf("A funcao nao tem raizes reais");
    }
    return 0;
}