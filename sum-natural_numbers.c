// This program is an example of recursive functions.
// Recursive function means that a function which calls itself.

#include<stdio.h>

int natural(int num)
{
    if(num==1 || num>1)
    {
       return (num + natural(num-1));
    }
    else
    {
        return 0;
    }
    return 0;
}

int main()
{
    int n;

    printf("\n Enter the natural no. upto which you want to find sum of : ");
    scanf("%d", &n);

    printf(" Sum of natural no. upto %d is : %d\n\n", n, natural(n));

    return 0;
}