#include <stdio.h>
#include <math.h>

double result = 0;

int calculo_de_serie(int, int, int);

int main() {
    int n_serie;
    scanf("%d", &n_serie);
    calculo_de_serie(n_serie, 1, 1);
    return 0;
}

int calculo_de_serie(int n, int contador, int contador_abaixo) {
    if(n == 0) {
        printf("S: %.2lf\n", 0.0);
        return 0;
    }
    if((contador % 2) == 0) {
        result += (pow(2, (contador - 1)) / (3 * contador_abaixo));
        contador_abaixo++;
    }
    else if((contador % 2) != 0) {
        result += contador / (pow(2, contador - 1));
    }
    if(contador == n) {
        printf("S: %.2lf\n", result);
        return 0;
    }
    contador++;
    calculo_de_serie(n, contador, contador_abaixo);
}