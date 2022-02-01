#include <stdio.h>
#include <math.h>

int main ()
{
    double n, piso, teto, raizq, seno, cosseno, pot;
    scanf("%lf", &n);
    piso = floor(n);
    teto = ceil(n);
    raizq = sqrt(n);
    seno = sin(n);
    cosseno = cos(n);
    pot = pow(n, 3);
    printf("numero=%lf\n", n);
    printf("piso=%lf\n", piso);
    printf("teto=%lf\n", teto);
    printf("raiz=%lf\n", raizq);
    printf("seno=%lf\n", seno);
    printf("cosseno=%lf\n", cosseno);
    printf("pot3=%lf\n", pot);
}