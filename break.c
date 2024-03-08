#include<stdio.h>
int main()
{
    int i, age;

    for(i=0; i<10; i++)
    {
        printf("\n Enter your age : ");
        scanf("%d", &age);

        if(age>10)
        {
            break;
        }
        printf(" You entered your age : %d \n", age);
    }
    return 0;
}