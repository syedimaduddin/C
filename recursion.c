#include<stdio.h>

int factorial(int num)
{
    if(num==1 || num==0)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num-1));
    }
    return 0;
}

int main()
{
    int n;

    printf("\n Enter the number you want to factorial of : ");
    scanf("%d", &n);

    printf(" Factorial of %d is : %d\n\n", n, factorial(n));

    return 0;
}