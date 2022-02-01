#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int batalha(round_b, v2, d1)
{
    int round_c = ceil(v2 / (d1 * 1.0));
    if (round_c <= round_b)
    {
        return 1;
    }
    else
    {
        d1 += 50;
    }
    round_b--;

    if (round_b == 0)
    {
        return 2;
    }
    batalha(round_b, v2, d1);
}

int rep(int n)
{
    int v1, v2, d1, d2, round_b, res;
    if (n == 0)
    {
        return 0;
    }
    scanf("%d %d %d %d", &v1, &v2, &d1, &d2);
    round_b = ceil(v1 / (d2 * 1.0));
    res = batalha(round_b, v2, d1);
    if (res == 1)
    {
        printf("Clodes\n");
    }
    else
    {
        printf("Bezaliel\n");
    }
    rep(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    rep(n);
    return 0;
}