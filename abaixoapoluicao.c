#include <stdio.h>

int main ()
{
    int qntd, cont = 0, mais;
    double multa = 0;
    while (qntd != 999)
    {
        scanf("%d", &qntd);
        if (qntd == 999)
        {
            printf("%.2lf\n", multa);
        }
        else if (qntd > 2)
        {
            mais = qntd - 2;
            multa += 12.89 * mais;
            cont++;
        }
    }
    printf("%d", cont);
    return 0;
}