#include <stdio.h>

int main ()
{
    int cont = 1, aux = 0;
    double preco, oferta, desconto;
    while (cont <= 5)
    {
        scanf("%lf%lf", &preco, &oferta);
        desconto = preco - oferta;
        if (preco * 0.2 == desconto || preco * 0.2 < desconto)
        {
            aux++;
        }
        cont++;
    }
    printf("%d", aux);
    return 0;
}