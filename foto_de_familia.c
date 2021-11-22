#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a1, a2, a3, a4, x;
    scanf("%f%f%f%f", &a1, &a2, &a3, &a4);
    if (a1 > a4)
    {
        x = a1;
        a1 = a4;
        a4 = x;
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
            if (a1 > a3)
    {
        x = a1;
        a1 = a3;
        a3 = x;
    }
                if (a2 > a3)
    {
        x = a2;
        a2 = a3;
        a3 = x;
    }
                if (a1 > a2)
    {
        x = a1;
        a1 = a2;
        a2 = x;
    }
    printf("%0.2f\n", a1);
    printf("%0.2f\n", a3);
    printf("%0.2f\n", a4);
    printf("%0.2f\n", a2);
	return 0;
}