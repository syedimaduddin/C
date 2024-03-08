// Program to find address of a variable in RAM by using Pointers.

#include<stdio.h>

int main()
{
    int a=10;
    int* ptr = &a;

    printf("Lets learn about pointers.\n");

    printf("The address of a in hexadecimal form is : %x\n", ptr); 
    printf("The address of a in pointer form is : %p\n", ptr); // Above two lines have same results.
                                                               // %x is used for hexadecimal form of address.

    printf("The address of a in hexadecimal form is : %x\n", &a); // we can also find address of anything by using ampersand(&).

    printf("The address of pointer is : %p\n", &ptr);
                              // %p is used for finding address in pointers.
    return 0;
}