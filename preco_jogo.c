#include <stdio.h>
#include <limits.h>
#define dbg if(0)
double desconto(double val, int dificuldade)
{
    int mult=1;
    if(val<=100)
    {
        mult=2;
    }
    switch (dificuldade)
    {
    case 0:
        val -= (val*(0.25/mult));
        break;

    case 1:
        val -= (val*(0.2/mult));
        break;
    case 2:
        val -= (val*(0.18/mult));
        break;
    case 3:
        val -= (val*(0.15/mult));
        break;
    case 4:
        val -= (val*(0.12/mult));
        break;

    case 5:
        val -= (val*(0.1/mult));
        break;

    }
    if(val<45)
    {
        val = 45;
        return val;
    }
    else return val;
}
int main()
{
    int n,i,k,dif;
    scanf("%d", &n);
    double val;
    for(i=0; i<n; i++)
    {
        scanf("%d %lf", &dif, &val);
        for(k=0; k<3; k++)
        {
            if(val>45)
            {
                val = desconto(val,dif);
            }

        }

        printf("Jogo[%d] = R$%.2lf\n", i, val);
    }
}