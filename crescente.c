#include <stdio.h>

void crescente(int n)
{
    if (n >= 1)
    {
        crescente(n-1);
        
        printf("%i\n", n);
    }
}
int main()
{
    int n, res;
    scanf("%d", &n);
    
    res = crescente(n);

    printf("%d", res);
}
