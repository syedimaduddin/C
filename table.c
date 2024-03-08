#include<stdio.h>

int main()
{
   int n;

   printf("\n Enter an integer to know its table : ");
   scanf("%d", &n);

   printf("Table of %d is : \n", n);
   
   for(int i=1; i<=10; i++)
   {
       printf(" %d * %d = %d\n", n, i , n*i);
   }

   return 0;
}