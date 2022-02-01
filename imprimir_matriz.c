#include<stdio.h>

void ler_linha(int i, int j, int m, float notas[][m])
{
    if (j < m)
    {
        scanf("%f", &notas[i][j]);

        ler_linha(i, j + 1, m, notas);
    }
}

void ler_matriz(int i, int n, int m, float notas[][m])
{
    if (i < n)
    {
        ler_linha(i, 0, m, notas);

        ler_matriz(i + 1, n, m, notas);
    }
}

void imprimir_linha(int i, int j, int m, float notas[][m])
{
    if (j < m)
    {
        if (j == m-1)
        {
           printf("%f\n", &notas[i][j]); 
        }
        else 
        {
            printf("%f\t", &notas[i][j]);
        }
        ler_linha(i, j + 1, m, notas);
    }
}

void imprimir_matriz(int i, int n, int m, float notas[][m])
{
    if (i < n)
    {
        imprimir_linha(i, 0, m, notas);

        imprimir_matriz(i + 1, n, m, notas);
    }
}

int main()
{
    float notas[5][4];

    ler_matriz(0, 5, 4, notas);

    imprimir_matriz(0, 5, 4, notas);

    return 0;
}