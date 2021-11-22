#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    float n1, n2, n3, media;
    int cont = 0;
    scanf("%f%f%f", &n1, &n2, &n3);
    media = (n1+n2+n3)/3;
    if (n1 >= media)
    {
        cont +=1;
    }
    if(n2 >= media)
    {
        cont += 1;   
    }
    if(n3 >= media)
    {
        cont += 1;   
    }
    printf("%i", cont);
	return 0;
}