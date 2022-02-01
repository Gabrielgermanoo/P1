#include <stdio.h>

double tempocasa(double vitoria, int t)
{
    if (t == 1)
    {
        vitoria += 33.21;
    }
    else if (t == 2)
    {
        vitoria += 10.51;
    } 
    else
    {
        vitoria -= 20.7;
    }
    return vitoria;
}

double pessoascasa(double vitoria, int a)
{
    if (a > 40000)
    {
        vitoria += a* 0.0008;
    }

    else 
    {
        vitoria -= a * 0.0008;
    }
    return vitoria;
}

double entrosamentocasa(double vitoria, int e)
{
    if (e > 0)
    {
        vitoria += 2.7 * e;
    }
    else if (e < 0)
    {
        vitoria += 1.8 * e;
    }
    return vitoria;
}

double tempofora(double vitoria, int t)
{
    if (t == 2 || t == 3)
    {
        return 0;
    }
    else
    {
        vitoria -= 10.87;
    }
    return vitoria;
}

double pessoasfora(double vitoria, int a)
{
    if (a > 45000)
    {
        vitoria -= 0.0003 * a;
    }
    else 
    {
        vitoria -= 0.0001 * a;
    }
    return vitoria;
}

double entrosamentofora(double vitoria, int e)
{
    if (e > 0)
    {
        vitoria += 5.2 * e;
    }
    else if (e < 0)
    {
        vitoria += 1.5 * e;
    }
}
 

int main()
{
    int c, t, a, l, e;
    double vitoria = 100;
    scanf("%d%d%d%d%d", &c, &t, &a, &l, &e);
    vitoria -= 2.7 * l;
    if (c == 1)
    {
        vitoria = tempocasa(vitoria, t);
        vitoria = pessoascasa(vitoria, a);
        vitoria = entrosamentocasa(vitoria, e);
    }
    else if (c == 0)
    {
        vitoria = tempofora(vitoria, t);
        if (vitoria == 0)
        {
            printf("A chance de vitoria do flamengo e de 0.00\n");
            return 0;
        }
        vitoria = pessoasfora(vitoria, a);
        vitoria = entrosamentofora(vitoria, e);
    }

    if (vitoria < 0)
    {
        printf("A chance de vitoria do flamengo e de 0.00\n");
    }
    else if (vitoria > 100)
    {
        printf("A chance de vitoria do flamengo e de 100.00\n");
    }
    else
    {
        printf("A chance de vitoria do flamengo e de %d\n", vitoria);
    }
    return 0;
}