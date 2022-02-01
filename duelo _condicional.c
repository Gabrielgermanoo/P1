#include <stdio.h>
double personagem(int np, double dano)
{
    if (np >= 1 && np <= 5)
    {
        dano *= 1.20;
    }
    else if (np >= 6 && np <= 10)
    {
        dano *=1.50;
    }
    else if (np >= 11 && np <= 15)
    {
        dano *=1.80;
    }
    else if (np >= 16 && np <= 20)
    {
        dano *= 2.0;
    }
    return dano;
}

double inimigo(int ne, double vida)
{
    if (ne >= 1 && ne <= 5)
    {
        vida *= 1.20;
    }
    else if (ne >= 6 && ne <= 10)
    {
        vida *=1.50;
    }
    else if (ne >= 11 && ne <= 15)
    {
        vida *=1.80;
    }
    else if (ne >= 16 && ne <= 20)
    {
        vida *= 2.0;
    }
    return vida;
}

int main ()
{
    int np, ne;
    double dano, vida;
    scanf("%d%lf", &np, &dano);
    scanf("%d%lf", &ne, &vida);
    if (np < 1 || ne < 1)
    {
        printf("Nivel abaixo");
    }
    else if (np >= 1 && ne >= 1 && np <= 20 && ne <= 20)
    {
        dano = personagem(np, dano);
        vida = inimigo(ne, vida);
        if ((vida - dano) <= 0)
        {
            printf("Personagem 1 venceu\n");
            printf("Dano causado: %.2lf", dano);
        }
        else
        {  
            printf("Personagem 2 venceu\n");
            printf("Vida restante: %.2lf", vida - dano);
        }
    }
    else
    {
        printf("Nivel acima");
    }
}