#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double resultado = 0;
int primo_atual = 0;

void func_fatorial(int qtd_termos, int contador_fatorial, int * v_fatorial) {
    *v_fatorial *= contador_fatorial;
    if(contador_fatorial < qtd_termos) {
        func_fatorial(qtd_termos, contador_fatorial + 1, v_fatorial);
    }
}

int eh_primo(int n, int contador) {
    int k;
    if(n <= 1) {
        return 0;
    }
    if(contador == n) {
        return n;
    }
    else if(contador < n){
        if((n % contador) == 0) {
            return 0;
        }
    }
    else {
        k = eh_primo(n, contador + 1);
        if(k == 1) {
            return n;
        }
    }
    eh_primo(n, contador + 1);
}

int proximo_primo(int primo, int contador) {
    if(contador == primo) {
        return contador;
    }    
    if((primo % contador) == 0) {
        proximo_primo(primo + 1, 2);
    }
    else if((primo % contador) != 0) {
        proximo_primo(primo, contador + 1);
    }
}
void listador_resposta(int serie_n, int contador_serie) {
    if(contador_serie > serie_n) {
        if(resultado != 0) {
            printf("\n");
            printf("%.2lf", resultado);
        }
        exit(0);
    }
    int fatorial = 1;
    func_fatorial(contador_serie, 1, &fatorial);
    if(contador_serie == 1) {
        printf("%d!/%d", contador_serie, contador_serie);
        resultado += (double)fatorial / contador_serie;
    }
    else if(contador_serie == 2) {
        primo_atual = 2;
        printf("%d!/%d", contador_serie, primo_atual);
        resultado += (double)fatorial / primo_atual;
    }
    else if((contador_serie > 2) && (contador_serie <= serie_n)) {
        if(contador_serie <= primo_atual) {
            printf("%d!/%d", contador_serie, primo_atual);
            resultado += (double)fatorial / primo_atual;
        }
        else if(contador_serie > primo_atual) {
            primo_atual = proximo_primo(primo_atual + 1, 2);
            printf("%d!/%d", contador_serie, primo_atual);            
            resultado += (double)fatorial / primo_atual;
        }
    }
    if(contador_serie != serie_n) {
        printf(" + ");
    }
    listador_resposta(serie_n, contador_serie + 1);
}

int main()
{
    int n;
    int primal, prox_primo = 0;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("%.2lf", n);
    }
    listador_resposta(n, 1);
    return 0;
}