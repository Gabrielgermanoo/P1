#include <stdio.h>

int main ()
{
    int cont = 1, n1, n2, aux = 0;
    scanf("%d%d", &n1, &n2);
    while (cont <= 49)
    {  
        if (cont % n1 == 0 && cont % n2 == 0)
        {
            aux++;
        }
        cont++;
    }
    printf("%d", aux);
    return 0;
}