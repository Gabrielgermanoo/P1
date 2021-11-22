#include <stdio.h>
#include <string.h>

int main()
{
    double A, B, C, Tri, Cir, Tra, Qua, Ret;
    scanf("%lf%lf%lf", &A, &B, &C);
    Tri = (A*C)/2;
    Cir = 3.14159*(C*C);
    Tra = ((A+B)*C)/2;
    Qua = B*B;
    Ret = A*B;
    printf("TRIANGULO: %.3lf\n", Tri);
    printf("CIRCULO: %.3lf\n", Cir);
    printf("TRAPEZIO: %.3lf\n", Tra);
    printf("QUADRADO: %.3lf\n", Qua);
    printf("RETANGULO: %.3lf", Ret);
	return 0;
}
