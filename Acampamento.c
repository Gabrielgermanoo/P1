#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a1, a2, a3, a4, a5, x;
    scanf("%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5);
    if (a1 > a5)
    {
        x = a1;
        a1 = a4;
        a4 = x;
    }
    if (a2 > a5)
    {
        x = a2;
        a2 = a4;
        a4 = x;
    }
    if (a3 > a5)
    {
        x = a3;
        a3 = a4;
        a4 = x;
    }
    if (a4 > a5)
    {
        x = a4;
        a4 = a5;
        a5 = x;
    }
    if (a1 > a2)
    {
        x = a1;
        a1 = a2;
        a2 = x;
    }
    if (a1 > a3)
    {
        x = a1;
        a1 = a3;
        a3 = x;
    }
    if (a1 > a4)
    {
        x = a1;
        a1 = a4;
        a4 = x;
    }
    if (a1 > a5)
    {
        x = a1;
        a1 = a5;
        a5 = x;
    }
    if (a2 > a3)
    {
        x = a2;
        a2 = a3;
        a3 = x;
    }
    if (a2 > a4)
    {
        x = a2;
        a2 = a4;
        a4 = x;
    }
    if (a3 > a4)
    {
        x = a3;
        a3 = a4;
        a4 = x;
    }
    printf("%d\n", a1);
    printf("%d\n", a2);
    printf("%d\n", a3);
    printf("%d\n", a4);
    printf("%d\n", a5);
	return 0;
}