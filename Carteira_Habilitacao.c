#include <stdio.h>

int main ()
{
    int idade;
    scanf("%d", &idade);
    if (idade >= 18)
    {
        printf("Voce ja pode tirar habilitacao!\n");
        printf("Voce ja tem direito a habilitacao ha %d ano(s)", idade - 18);
    }
    else
    {
        printf("Voce precisa esperar mais %d ano(s)!", 18 - idade);
    }
    return 0;
}