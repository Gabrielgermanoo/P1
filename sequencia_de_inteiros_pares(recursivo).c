#include <stdio.h>
int par(int aux, int x)
{   
    if (x % 2 == 0)
    {
        if (aux <= x)
        {
            printf("%d\n", x);
            par(aux, x - 2);
        }
    }
    else 
    {
        x -= 1;
        if (aux <= x)
        {
            printf("%d\n", x);
            par(aux, x - 2);
        }
    }
}

int main()
{
    int x;
    scanf("%d", &x);
    par(0, x);
    return 0;
}