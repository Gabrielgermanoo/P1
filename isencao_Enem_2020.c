#include <stdio.h>
#include <stdlib.h> 

int main()
{
    long int notaeja;
    char EM[4], EJA[2], escola[3], isencao[2], aus[2];
    float renda;
    scanf("%s %s %ld %s %f %s", &EM, &EJA, &notaeja, &escola, &renda, &isencao);
    if ((strcmp(EM, "CLD") == 0) || (strcmp(EM, "CVC") == 0) || (strcmp(EM, "CSC") == 0) || (strcmp(EM, "NCC") == 0))
    {
        if((strcmp(isencao, "s")== 0))
        {
            scanf("%s", &aus);
            if ((strcmp(aus, "s") ==0))
            {
                if ((strcmp (EJA, "s") == 0) && (notaeja >= 400) && (strcmp(escola, "PUB") == 0))
                {
                    printf("Voce terah direito a isencao");
                }
                else if ((strcmp(EM, "CVC") == 0) && (strcmp(escola, "PUB") == 0))
                {
                    printf("Voce terah direito a isencao");
                }
                else if ((strcmp(EM, "CVC") == 0) && (strcmp(escola, "PPB") == 0) && (renda <= 1431.00) && (strcmp (EJA, "s") == 0) && (notaeja >= 400))
                {
                    printf("Voce terah direito a isencao");
                }
                else if ((strcmp(EM, "CLD") == 0) && (renda <= 1431.00) && (strcmp(escola, "PUB") == 0))
                {
                    printf("Voce terah direito a isencao");
                }
                else 
                {
                    printf("Infelizmente voce nao tem direito a isencao");
                }
            }
            else 
            {
                printf("Infelizmente voce nao tem direito a isencao");
            }
        }
        else 
        {
            if ((strcmp (EJA, "s") == 0) && (notaeja >= 400) && (strcmp(escola, "PUB") == 0))
                {
                    printf("Voce terah direito a isencao");
                }
                else if ((strcmp(EM, "CVC") == 0) && (strcmp(escola, "PUB") == 0))
                {
                    printf("Voce terah direito a isencao");
                }
                else if ((strcmp(EM, "CVC") == 0) && (strcmp(escola, "PPB") == 0) && (renda <= 1431.00) && (strcmp (EJA, "s") == 0) && (notaeja >= 400))
                {
                    printf("Voce terah direito a isencao");
                }
                else if ((strcmp(EM, "CLD") == 0) && (renda <= 1431.00) && (strcmp(escola, "PUB") == 0))
                {
                    printf("Voce terah direito a isencao");
                }
                else 
                {
                    printf("Infelizmente voce nao tem direito a isencao");
                }
        }
    }
    else 
    {
        printf("Informacao sobre ensino medio invalida");
    }
    
    return 0;
}