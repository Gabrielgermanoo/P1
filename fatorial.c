#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fat(int x)
{
    if (x == 0)
    {
        return 1;
    }
    return x * fat(x-1);
}
void rep(int aux)
{
    int x;
    if (aux != -1)
    {
        scanf("%d", &x);
        if (x != -1)
        {
            printf("%d\n", fat(x));
        }
    rep(x);
    }
}
int main() {
    int x = 0;
    rep(1);
    
	return 0;
}