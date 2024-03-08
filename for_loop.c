#include <stdio.h>

int main()
{
    int i, n;

    printf("\n Enter the natural no. upto which you want to mutiply by 2 : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf(" %d * 2 : %d\n", i, i * 2);
    }
    return 0;
}