#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    scanf("%i%i", &n1, &n2);
    if (n2<n1)
    {
        printf("%i %i", n2, n1);
    }
    else
    {
        printf("%i %i", n1, n2);
    }
	return 0;
}