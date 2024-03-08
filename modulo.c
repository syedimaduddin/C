#include<stdio.h>
int main()
{
    int x,y;

    printf("\n Enter the value of x : ");
    scanf("%d", &x);

    printf("\n Enter the vaue of y : ");
    scanf("%d", &y);

    int result;
    result = x % y;

    printf("\n Remainder when %d is divided by %d = %d \n\n", x, y, result);

    return 0;
}