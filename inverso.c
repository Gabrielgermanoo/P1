#include <stdio.h>
int entradas(int contador, int c_max, int * array, int * array_copy) {
    if(contador == c_max){
        return 0;
    }

    scanf("%d", &array[contador]);
    entradas(contador + 1, c_max, array, array_copy);
}

int inverso(int contador, int c_max, int * array, int * array_copy) {
    if(contador == c_max){
        return 0;
    }

    if(contador == c_max - 1) {
        printf("%d\n", array[c_max - contador - 1]);
    }
    else {
        printf("%d ", array[c_max - contador - 1]);
    }

    inverso(contador + 1, c_max, array, array_copy);
}
int main() {
    int array[50000], array_c[50000];

    int n_entradas;
    scanf("%d", &n_entradas);

    entradas(0, n_entradas, &array, &array_c);

    inverso(0, n_entradas, &array, &array_c);
    return 0;
}