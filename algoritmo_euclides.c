#include <stdio.h>
#include <math.h>
int rec(int a, int d){
    if (a % d == 0)
    {
        return d;
    }
    else 
    {
        rec(d, a % d);
    }
}
void rep(int n, int aux)
{
    if (aux != n)
    {
        int a, d;
        scanf("%d%d", &a, &d);
        printf("MDC(%d,%d) = %d\n", a, d, rec(a,d));
        rep(n, aux + 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    rep(n, 0);
    return 0;
}