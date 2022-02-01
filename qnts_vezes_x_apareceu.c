#include <stdio.h>

int ler(int a[], int i, int tamanho)
{
    if (i == tamanho)
    {
        return;
    }
    scanf("%d", &a[i]);

    ler(a, i + 1, tamanho);
}
int main()
{
    int a[10], x, total;
    ler(a, 0, 10);
    scanf("%d", &x);
    total = procurar(x, a, 10);
    printf("%d", total);
    return 0;
}

int procurar(int x, int a[], int tamanho)
{
    if (tamanho == 0)
    {
        return 0;
    }
    if (a[tamanho - 1] == x)
    {
        return 1 + procurar(x, a, tamanho - 1);
    }
    else
    {
        return procurar(x, a, tamanho - 1);
    }
}