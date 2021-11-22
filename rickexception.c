#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sonho(int x, int t, int pat)
{
    if (pat <= t)
    {
        if (pat % 2 == 0)
        {
            x +=  (x % 5);
        }
        else 
        {
            x += 3;
        }     
    }
    sonho(x, t, pat);
    return x;
}

int main() {
    int x, t, res;
    scanf("%i%i", &x, &t);
    res = sonho(x, t, 1);
    printf("%i", res);
	return 0;
}