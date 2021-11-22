#include <stdio.h>
int par(int aux, int x)
{   
    if (aux <= x)
    {
        printf("%d\n", aux);
        par(aux + 2, x);
    }
}

int main()
{
    int x;
    scanf("%d", &x);
    par(0, x);
    return 0;
}