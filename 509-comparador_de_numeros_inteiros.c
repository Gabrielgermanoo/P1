#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, y;
    scanf("%i%i", &x, &y);
    if (x > y)
    {
        printf("1\n");
    }
    else if (x < y)
    {
        printf("0\n");
    }
    if (x == y)
    {
        printf("1\n");
    }
    else if (x != y)
    {
        printf("0\n");
    }
    
    if (x != y)
    {
        printf("1\n");
    }
    else if (x = y)
    {
        printf("0\n");
    }
    if (x >= y)
    {
        printf("1\n");
    }
    else if (x < y)
    {
        printf("0\n");
    }
    if (x <= y)
    {
        printf("1\n");
    }
    else if (x > y)
    {
        printf("0\n");
    }
	return 0;
}