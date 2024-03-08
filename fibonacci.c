// Print nth Fibonacci number by using recursive function.
// Fibonacci Series = 0,1,1,2,3,5,8....   {Next no. is the sum of previous two.}

#include<stdio.h>

int Fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return Fib(n-1) + Fib(n-2);
}

int main()
{
    int num;
    
    printf("\n Enter the place to find no. at that Fibonacci Series : ");
    scanf("%d", &num);

    printf(" The %dth place in Fibonacci Series have no. : %d\n", num, Fib(num));

    return 0;
}