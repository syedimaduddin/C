#include<stdio.h>
int main()
{
    const int g1 = 45;
    const int g2 = 15;

    int m;

    printf("\n Gifts for qualified students in maths and science : \n");

    printf("\n Are you passed in Maths : \n");
    scanf("%d", m);


    if(m==1)
    {
        printf("\n You  passed in Maths so you get Rs. %d reward.", g2);
    }
    else
    {
        printf("\n You are failed in Maths.");
    }
   
    return 0;
}