#include<stdio.h>
#include<string.h>

int main()
{
    char name[25];
    char fname[25];
    int age;

    printf("\nEnter your name : ");
    scanf("%s", &name);

    printf("Enter your Father's Name : ");
    scanf("%s", &fname); 

    printf("Enter your age : ");
    scanf("%d", &age);

    printf("\n Your entered details are :\n");
    printf("\tName          : %s\n", name);
    printf("\tFather's Name : %s\n", fname);
    printf("\tAge           : %d\n", age);

    return 0;
}