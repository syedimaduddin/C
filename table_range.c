#include<stdio.h>
int main()
{
    int n,i,range;

    printf("\n Enter an integer : ");
    scanf("%d", &n);

    printf("\n Enter the Range : ");
    scanf("%d", &range);

    for(i=1; i<=range; i++)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }

    return 0;
}