#include<stdio.h>
int main()
{
    int i=0,n;

    printf("\n Enter an integer value : ");
    scanf("%d", &n);

    while (i<n)                
    {
        printf("%d\n", i+1);
        i = i+1;  
    }   
    return 0;    
}