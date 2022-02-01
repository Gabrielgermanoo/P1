#include <stdio.h>

int main ()
{
    double arvore, qntd, valor, preco, total;
    int cont = 0;
    scanf("%lf", &arvore);
    while (cont < 3)
    {
        cont++;
        scanf("%lf%lf", &qntd, &valor);
        valor *= qntd;
        total += valor;
    }
    total += arvore;
    preco = total/21;
    printf("%.2lf\n", total);
    printf("%.2lf", preco);
    return 0;
}