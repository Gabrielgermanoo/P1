#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int numero(int n, int aux, int soma)
{
    int div = 0, produto = 0;
    if (n > 0)
    {
        div = n % 10;
        n /= 10;
        aux++;
        if (div % 2 == 0)
        {
            produto = div * 2 * aux;
            soma += produto;
        }
        else
        {
            produto = div * 3 * aux;
            soma += produto;
        }

        numero(n, aux, soma);
    }
    return soma;
}

void rep(int n)
{
    if (n != 0)
    {
        scanf("%d", &n);
        printf("%d\n", numero(n, 0, 0));
        rep(n);
    }
}

void main()
{
    rep(1);
}