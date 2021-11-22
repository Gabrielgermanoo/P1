#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    scanf("%i%i%i", &a, &b, &c);
    if (a - b - c == 0)
    {
        printf("S");
    }
    else if(a - b == 0)
    {
        printf("S");
    }
    else if (a - c == 0)
    {
        printf("S");
    }
    else if(a - b + c == 0)
    {
        printf("S");
    }
    else if(a + b - c == 0)
    {
        printf("S");
    }
    else if(b - a == 0)
    {
        printf("S");
    }
    else if(b - c == 0)
    {
        printf("S");
    }
    else if(b - a + c == 0)
    {
        printf("S");
    }
    else if(b + a - c == 0)
    {
        printf("S");
    }
    else if(b - a - c == 0)
    {
        printf("S");
    }
    else if(c - a == 0)
    {
        printf("S");
    }
    else if(c - b == 0)
    {
        printf("S");
    }
    else if(c - a + b == 0)
    {
        printf("S");
    }
    else if(c + a - b == 0)
    {
        printf("S");
    }
    else if(c - a - b == 0)
    {
        printf("S");
    }
    else 
    {
        printf("N");    
    }
	return 0;
}