#include <stdio.h>

int main ()
{
    int t1, t2, t3;
    scanf("%d%d%d", &t1, &t2, &t3);
    if (t1 > t2 && t3 >= t2)
    {
        printf(":)");
    } 
    else if (t2 > t1 && t3 > t2)
    {
        if (t3 - t2 >= (t2 - t1))
        {
            printf(":)");
        }
        else
        {
            printf(":(");
        }
    }
    else if (t1 > t2 && t2 > t3)
    {
        if ((t2 - t3) < (t1 - t2))
        {
            printf(":)");
        } 
        else
        {
            printf(":(");
        }
    }
    else if (t1 == t2 && t3 > t2)
    {
        printf(":)");
    }
    else
    {
        printf(":(");

    }
}