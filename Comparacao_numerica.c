#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float x, n, aux;
    scanf("%f%f", &x, &n);
    if (x > n)
    {
        aux = x;
        x = n;
        n = aux;
    }
    printf("Digite um numero:\n");
    printf("Digite outro numero:\n");
    printf("Maior numero: %.1f", n);
	return 0;
}