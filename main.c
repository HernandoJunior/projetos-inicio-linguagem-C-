#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i, produto;

    printf("Deseja tabuada pra qual valor: ");
    scanf("%d", &x);

    for (i = 1; i <= 10 ; i++) {
        produto = x * i;
        printf("%d x %d = %d\n", x, i, produto);

    }


    return 0;
}
