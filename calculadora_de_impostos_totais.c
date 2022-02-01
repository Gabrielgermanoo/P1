#include <stdio.h>

int main()
{
    double cotacao, aliquota, produto, frete, produtobr, fretebr, total, taxaimportacao = 0, final, icms, impostos, trouxa;
    scanf("%lf%lf%lf%lf", &cotacao, &aliquota, &produto, &frete);
    produtobr = produto * cotacao;
    fretebr = frete * cotacao;
    total = produtobr + fretebr;
    aliquota /= 100;
    if (produto < 2500)
    {
        taxaimportacao = total * 0.6;
        final = (produtobr + fretebr + taxaimportacao)/ (1 - aliquota);
    }
    else
    {
        taxaimportacao = produtobr * 0.6;
        final = (produtobr + taxaimportacao)/ (1 - aliquota);
    }
    icms = final * aliquota;
    impostos = taxaimportacao + icms;
    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n", cotacao, produtobr, fretebr, total, taxaimportacao, icms, impostos);
    if (produto < 2500)
    {
        printf("%.2lf\n", final);
        printf("Impostos calculados com o frete");
    }
    else
    {
        trouxa = final + fretebr;
        printf("%.2lf\n", trouxa);
        printf("Impostos calculados sem o frete");
    }
    return 0;
}