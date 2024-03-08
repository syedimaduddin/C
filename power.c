// This program is an example of recursive functions.
// Recursive functions means that the function which calls itself.

#include<stdio.h>

int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    else
    {
        return n*power(n,p-1);
    }
    return 0;
}

int main ()
{
    int p,n;

    printf("\n Enter the no. to find its power : ");
    scanf("%d", &n);

    printf(" Which power of the no. you want to know : ");
    scanf("%d", &p);
    
    printf("\n The value of %d^%d is : %d\n\n", n, p, power(n,p));
    
    return 0;
}