#include <stdio.h>

int triangular(int n, int a)
{
    if ((a * (a + 1) * (a + 2)) < n)
    {
        triangular(n, a + 1);
    }
    else if ((a * (a + 1) * (a + 2)) == n && n != 0)
    {
        printf("%d * %d * %d = %d\n", a, (a + 1), (a + 2), n);
        printf("Verdadeiro\n");
    }
    else if ((a * (a + 1) * (a + 2)) >= n || n == 0)
    {
        printf("Falso\n");
    }
    return a;
}

int main()
{
    int n, a = 0, d;
    scanf("%d", &n);
    triangular(n, 0);
    return 0;
}