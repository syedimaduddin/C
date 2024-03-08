#include <stdio.h>
int main()
{
    int i = 0, n;

    printf("\n Enter an inter value : ");
    scanf("%d", &n);

    do
    {
        printf("\t%d\n", i+1);
        i = i + 1;
    } while (i < n);
    printf("\n");
    return 0;
}