#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    if (n >= 1 || n <= 7)
    {
        if (n == 1)
        {
            printf("domingo");
        }
        else if (n == 2)
        {
            printf("segunda");
        }
        else if (n == 3)
        {
            printf("terca");
        }
        else if (n == 4)
        {
            printf("quarta");
        }
        else if (n == 5)
        {
            printf("quinta");
        }
        else if (n == 6)
        {
            printf("sexta");
        }
        else if (n == 7)
        {
            printf("sabado");
        }
    } 
    return 0;
}