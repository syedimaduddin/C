// Comparision in iteration and recursion.
// Recursion takes more time than iteration for greater numbers.

#include<stdio.h>

int recursion(int n)
{
    if (n==0 || n==1)
    {
        return n;
    }
    else
    {
        return  recursion(n-1)+recursion(n-2);
    }
}

int iteration(int n)
{
    int a=0, b=1;
    

    for(int i=0; i<n; i++)
    {
       b=a+b;
       a=b-a; 
    }
    return a;
}
int main()
{
    int n;

    printf("\n Fibonacci Series : 0,1,1,2,3,5.... ");
    printf("\n Enter the term you want to know : ");
    scanf("%d", &n);

    printf("\n Value of Fibonacci number at position no. %d using iterative approach is :%d", n, iteration(n));

    printf("\n Value of Fibonacci number at position no. %d using recursive approach is :%d\n\n", n, recursion(n));

    return 0;
}