#include<stdio.h>
int main()
{
    printf("\n See the difference between three types of typecasting :\n");

    float b = (float) 54/5;
    printf("\n The value of b is %f\n", b);

    int a = 54/5;
    printf("\n The value of a is %f\n",(float) a);

    float c = 54;
    printf("\n The value of c is %d\n\n", (int) c);

    return 0;
}