#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, x1, x2, x3;
    scanf("%i", &x);
    x1 = x/10;
    x2= x % 10;
    x3= (x2*10)+x1;
    printf("%i", x3);
	return 0;
}