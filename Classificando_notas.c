#include <stdio.h>

int main()
{
    float nota;
    scanf("%f", &nota);
    if (nota > 7.0)
    {
        printf("bolinha verde");
    }
    else if (nota >= 5.0 && nota <= 7.0)
    {
        printf("bolinha amarela");
    }
    else if (nota < 5.0)
    {
        printf("bolinha vermelha");
    }
    return 0;
}