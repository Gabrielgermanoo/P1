#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double ph;
    scanf("%lf", &ph);
    if (ph > 7){
        
        printf("Basica\n");
    }
    if (ph < 7){
        
        printf("Acida\n");
        
         
     }
    if (ph == 7){
         
         printf("Neutra\n");
        
         
     }
	return 0;
}