#include <stdio.h>
#include <string.h>

int main()
{
    unsigned int x_input, y_input, n_de_x, tamanho_do_ciclo, cont, maior_score;
    int temp = 0;
    while((scanf("%d%d", &x_input, &y_input))!=EOF)
    {
        maior_score = 0;
        printf("%d %d ", x_input, y_input);
        if(x_input > y_input) {
            temp = x_input;
            x_input = y_input;
            y_input = temp;
        }
        for(int i = x_input; i <= y_input; i++)
        {
            cont = 0;
            n_de_x = i;
            while(n_de_x != 1) {
                if(n_de_x % 2 == 0)
                {
                    n_de_x /= 2;
                }
                else if(n_de_x % 2 != 0)
                {
                    n_de_x = (n_de_x * 3) + 1;
                }
                cont++;
            }
            cont++;
            if(cont > maior_score) {
                maior_score = cont;
            }
        }
        printf("%d\n", maior_score);
    }
    return 0;
}