/*   Conversion of Units :
     kms to miles 
     inches to foot
     cms to inches
     pound to kgs
     inches to meters
*/

#include<stdio.h>

int main()
{
    int n;
    

    while (1)
    {
        printf("\n--------------------------------------------------------------\n");
        printf("\n To quit the program type = 0\n");
        printf("\n Conversion from : ");
        printf("\n kms to miles type = 1");
        printf("\n inches to foot type = 2");
        printf("\n cms to inches type = 3");
        printf("\n pounds to kgs type = 4");
        printf("\n inches to meters type = 5");

        printf("\n\n Enter the no. from above which conversion you want to use : ");
        scanf("%d", &n);

        if (n==0)
        {
            printf("\n Quitting the program.....\n\n");
            goto end;
        }
        if (n==1)
        {
            float a,b;
            printf("\n Enter the value in kms : ");
            scanf("%f", &a);
            b=0.625*a;
            printf("\n %f kms = %f miles\n\n", a, b);
            continue;
        }
        if (n==2)
            {
                float a,b;
                printf("\n Enter the value in inches : ");
                scanf("%f", &a);
                b=a/12;
                printf("\n %f inches = %f foot\n\n", a, b);
                continue;
            }
        if (n==3)
            {
                float a,b;
                printf("\n Enter the value in cms : ");
                scanf("%f", &a);
                b=(1/2.54)*a;
                printf("\n %f cms = %f inches\n\n", a, b);
                continue;
            }
        if (n==4)
            {
                float a,b;
                printf("\n Enter the value in pound : ");
                scanf("%f", &a);
                b=0.454*a;
                printf("\n %f pound = %f kgs\n\n", a, b);
                continue;
            }
        if (n==5)
            {
                float a,b;
                printf("\n Enter the value in inches : ");
                scanf("%f", &a);
                b=(2.54/100)*a;
                printf("\n %f inches = %f meters\n\n", a, b);
                continue;
            }
        if (n!=0 && n!=1 && n!=2 && n!=3 && n!=4 && n!=5)
        {
            printf("\n You entered a wrong number.\n\n");
            continue;
        }
    }
    end:
    return 0;
}
