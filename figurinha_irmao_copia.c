#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#define dbg if(0)
int ehpar(int a)
{
    if(a%2==0)
    {
        return 1;
    }
    else return 0;
}
int repetido(int v[], int tam, int num)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(v[i]==num)
        {
            return 1;
        }
    }
    return 0;

}
int soma(int v[], int tam)
{
    int i,soma_par=0,soma_imp=0;
    for(i=0;i<tam;i++)
    {
        if(ehpar(v[i]))
        {
            soma_par+=v[i];
        }
        else soma_imp+=v[i];
    }
    if(soma_par>soma_imp) return soma_par;
    else return soma_imp;

}
int main()
{
    int fig,i,maria=0,joao=0, num;
    scanf("%d", &fig);
    int serie[fig];
    memset(serie,0,sizeof serie);
    for(i=0; i<fig; i++)
    {
        scanf("%d", &num);

        if(ehpar(num))
        {
            joao++;
            if(!repetido(serie,fig,num))
            {
                serie[i]=num;
            }
        }
        else
        {
            maria++;
            if(!repetido(serie,fig,num))
            {
                serie[i]=num;
            }
        }

    }
    printf("%d\n",joao);
    printf("%d\n",maria);
    printf("%d\n",soma(serie,fig));


}
