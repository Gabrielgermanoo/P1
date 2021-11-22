#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int m(int x, int n, int div, int mdc)
{
    if (div <= x)
    {
        if ((x % div == 0) && (n % div == 0))
        {
            mdc = div;
        }
    m(x, n, div + 1, mdc);
    }
    else 
    {
        return mdc;
    }
}
int main() {
    int x, n, aux, res;
    scanf("%i%i", &x, &n);
    if (x > n)
    {
        aux = x;
        x = n;
        n = aux;
    }
    res = m(x, n, 1, 1);
    printf("%i", res);
	return 0;
}