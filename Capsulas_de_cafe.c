#include <stdio.h>

int caps(int cp, char p)
{
    int capsula;
    if (p == 'p' || p == 'P')
    {
        capsula = 10 * cp;
    }
    else if( p == 'g' || p == 'G')
    {
        capsula = 16 * cp;
    }
    return capsula;
}

int rep (int aux, int x)
{
    int cp;
    char p;
    if (aux <7)
    {
        scanf("%d\n%c", &cp, &p);
        x += caps(cp, p);
        aux += 1;
        rep(aux, x);
    }
    else
    {
        return x;
    }
}

int main ()
{
    int aux, x = rep(0, 0);
    printf("%d\n", x);
    printf("%d\n", (2 * x)/7);
    return 0;
}