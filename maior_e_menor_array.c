#include <stdio.h>

int main()
{
    int array[5], maior = 0, menor = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &array[i]);
    }
    maior = array[0];
    for (int i = 1; i < 6; i++)
    {
        if (array[i] > maior)
        {
            maior = array[i];
        }
    }

    menor = array[0];
    for (int i = 1; i < 6; i++)
    {
        if (array[i] < menor)
        {
            menor = array[i];
        }
    }
    printf("%d\n%d", menor, maior);
    return 0;
}