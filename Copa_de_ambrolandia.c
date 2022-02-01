#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char N[2], S[2];
    int idade;
    double Vi = 0;
    scanf("%s%d%s%lf", &N, &idade, &S, &Vi);
    
    if (idade > 0 && idade <= 120)
    {

        if ((strcmp(N, "B") == 0) || (strcmp(N, "A") == 0) || (strcmp(N, "F") == 0) || (strcmp(N, "C") == 0) || (strcmp(N, "I") == 0) || (strcmp(N, "R") == 0))
        {

            if ((strcmp(N, "B") == 0))
            {
                Vi *= 0.5;
                printf("R$ %0.2lf", Vi);
            }
            else if ((strcmp(N, "A") == 0) && (strcmp(S, "M") == 0) && idade >= 18)
            {
                printf("R$ %0.2lf", Vi);
            }
            else if ((strcmp(N, "A") == 0) && (strcmp(S, "F") == 0) && idade >= 18)
            {
                Vi *= 0.8;
                printf("R$ %0.2lf", Vi);
            }
            else if ((strcmp(N, "A") == 0) && idade < 18)
            {
                Vi *= 0.8;
                printf("R$ %0.2lf", Vi);
            }
            else if ((strcmp(N, "F") == 0) || (strcmp(N, "C") == 0))
            {
                if (idade >= 21)
                {
                    Vi *= 0.7;
                    printf("R$ %0.2lf", Vi);
                }
                else 
                {
                    printf("nao pode comprar");
                }
            }
            else if ((strcmp(N, "I") == 0) || (strcmp(N, "R") == 0))
            {
                if (idade <= 16)
                {
                    Vi *= 0.6;
                    printf("R$ %0.2lf", Vi);
                }
                else 
                {
                    Vi *= 0.7;
                    printf("R$ %0.2lf", Vi);
                }
            }
        }
        else
        {
            if ((strcmp(S, "F") == 0))
            {
                Vi *= 0.9;
                printf("R$ %0.2lf", Vi);
            }
            else
            {
                printf("R$ %0.2lf", Vi);
            }
        }
}
else 
    {
        printf("idade invalida!");
    }
}