#include <stdio.h>

int main() {
    int n, c, s, e, l = 0, aux = 0;
    scanf("%d%d", &n, &c);
    for(int i = 1; i <= n; i++) {
        scanf("%d%d", &s, &e);
        aux -= s;
        if(c < (aux + e)){
            printf("S");
            l = 1;
            break;
        }
        aux += e;
    }
    if(l == 0){
        printf("N");
    }
    return 0;
}