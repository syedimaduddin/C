#include<stdio.h>
int main()
{
    int age;

    printf("\n Enter your age : ");
    scanf("%d", &age);

    switch(age)
    {
        case 17:
        printf("\n You are not able to vote.\n");
        break;

        case 18:
        printf("\n You can vote.\n");
        break;

        default:
        printf("\n It's your choice to vote.\n");
        break;
    }
    return 0;
}