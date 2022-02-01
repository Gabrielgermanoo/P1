#include <stdio.h>

int div(int x, int N, int aux)
{
    if (x <= N)
    {
        if (x % 3 == 0 && N % x == 0)
        {
            aux += 1;
        }
        div(x + 1, N, aux);
    }
    else
    {
        return aux;
    }
}
int main()
{
    int N, x;
    scanf("%d", &N);
    x = div(1, N, 0);
    if (x > 0)
    {
        printf("%d\n", x);
    }
    else if (x == 0)
    {
        printf("O numero nao possui divisores multiplos de 3!");
    }
    return 0;
}