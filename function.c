#include <stdio.h>
#include <string.h>

int sum(int a, int b);  // With argument, with return value. Whole func. is at end.

void printstar(int n)      // With argument, without return value.
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

void name()                // Without argument, without return value.
{
    int x[20];
    printf("\n Enter your name : ");
    scanf("%s", &x);
    printf(" Your name is : %s\n", x);
}

int age()                 // Without argument, with return value.
{
    int g;
    printf("\n What is your age : ");
    scanf("%d", &g);
    printf(" Your age is : %d\n", g);

    return 0;
}

int main()
{
    int a, b, c, d, n;

    printf("\n Enter first number : ");
    scanf("%d", &a);

    printf(" Enter second number : ");
    scanf("%d", &b);

    printf("\n Your entered numbers are : %d, %d\n", a, b);

    c = sum(a, b);
    printf("\n The sum of two numbers is : %d\n", c);

    printf("\n Numbers of stars you want to come in one line : ");
    scanf("%d", &n);
    printstar(n);

    name();

    age();

    printf("\n Thankyou to Share your details with us.\n\n");

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
