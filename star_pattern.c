#include<stdio.h>

int main()
{
    int n;

    printf("\nEnter 0 for triangular star pattern or Enter 1 for reverse triangular star pattern : ");
    scanf("%d", &n);

    
        if(n==0)
        {
            printf("\n*\n***\n*****\n*******\n");
        }

        if(n==1)
        {
        printf("\n*******\n*****\n***\n*\n");
        }
    

       if(n!=0 && n!=1)
      {
         printf("\nYou entered a wrong number.\n");
         printf("\nPlease enter only 0 or 1......\n\n");
      }
    return 0;
}