#include <stdio.h>
#include <stdlib.h>

void rep(int n, int moeda, int x, int y, char ultimo_movimento)
{
    if (n == 0)
    {
        printf("%d\n", moeda);
    }
    else
    {
        char movimento_atual;
        scanf(" %c", &movimento_atual);

        if (movimento_atual == 'D')
        {
            x++;
        }
        if (movimento_atual == 'C')
        {
            y++;
        }
        printf("%d", y - x);
        if ((x != y) && abs(x - y) == 1)
        {
            if (movimento_atual == ultimo_movimento)
            {
                if (((y > x) && (movimento_atual == 'C')) || (x > y) && (movimento_atual == 'D'))
                {
                    rep(n - 1, moeda + 1, x, y, ultimo_movimento);
                }
                else
                {
                    ultimo_movimento = movimento_atual;
                    rep(n - 1, moeda, x, y, ultimo_movimento);
                }
            }
            else
            {
                ultimo_movimento = movimento_atual;
                rep(n - 1, moeda, x, y, ultimo_movimento);
            }
        }
        else if (x == y || ((x != y) && abs(x - y) != 1))
        {
            ultimo_movimento = movimento_atual;
            rep((n - 1), moeda, x, y, ultimo_movimento);
        }
    }
}

void main()
{
    int n, x = 0, y = 0, moeda = 0;
    char ultimo_movimento;
    scanf("%d", &n);
    rep(n, moeda, x, y, ultimo_movimento);
}