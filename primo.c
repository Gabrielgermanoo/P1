#include <stdio.h>

int primo(int x, int cont, int div)
{
    if (x % cont == 0)
    {
        div += 1;
    }
    if (x == 1 || x == 0)
    {
        return 0;
    }
    if (x == cont)
    {
        if (div > 2)
        {
            return 0;
        }
        else
        {
            return 1;
        }
        
    }
    else
    {
        primo(x, cont + 1, div);
    }
}
void rep (int aux)
{
    int x;
    if (aux != -1)
    {
        scanf("%d", &x);
        if (x != -1)
        {
            printf("%d\n", primo(x, 1, 0));
        }
        rep(x);
    }
    
}

int main() {
    int aux;
    rep(1);
    return 0;
}