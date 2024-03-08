// We call function by reference (means copy address of a and b to swap).
// When we call function by reference (use address of a,b) then its actual values (a,b) changes.
// When we call function by value (use values of a,b) then its actual values (a,b) doesn't changes.

#include<stdio.h>

void swap(int*x, int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

    return;
}

int main()
{
    int a,b;

    printf("\nEnter the value of two numbers which you want to swap : \n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Your entered numbers are : %d, %d\n", a,b);
    swap(&a,&b);
    printf("After swapping numbers : %d, %d\n", a, b);

    return 0;
}