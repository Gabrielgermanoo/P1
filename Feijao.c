#include <stdio.h>

int main () 
{
    int c1, c2, c3, c4;
    scanf("%d%d%d%d", &c1, &c2, &c3, &c4);
    if (c1 == 1 && c2 == 0 && c3 == 0 && c4 == 0)
    {
        printf("%d", c1);
    }
    else if (c1 == 0 && c2 == 1 && c3 == 0 && c4 == 0)
    {
        printf("%d", c2);
    }
    else if (c1 == 0 && c2 == 0 && c3 == 1 && c4 == 0)
    {
        printf("%d", c3);
    }
    else if (c1 == 0 && c2 == 0 && c3 == 0 && c4 == 1)
    {
        printf("%d", c4);
    }
    return 0;
}