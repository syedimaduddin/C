// Some different arithmetics in pointers.
// ++  --  +  - 

#include<stdio.h>

int main()
{
    int a=10;
    int* ptr=&a;
    int arr[]={1,2,3,4,5,6};
    int* ptrarr=arr;

    printf("%d\n", ptr);
    printf("%d\n", &a);

    printf("%d\n", ptr+1);

    printf("%d\n", ptr-1);

    printf("%d\n", ptrarr);
    printf("%d\n", &arr[0]);

    printf("%d\n", *(&a));
    printf("%d\n", *(&arr[0]));
    printf("%d\n", *ptrarr);
   
    return 0;
}