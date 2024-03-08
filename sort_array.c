// Q. Check if an array is sorted or not ?

#include<stdio.h>
#include<stdbool.h>

bool sorted(int arr[], int n)
{
    if(n==1)
    {
        return true;
    }
    bool restarray = sorted(arr+1, n-1);
    return (arr[0]<=arr[1] && restarray);
}

int main()
{
    int i,n,array[n];

    printf("\n Enter the no. of arrays you want to enter : ");
    scanf("%d", &n);

    for(i=0; i<n;i++)
    {
        printf("\n Array %d is : \n", i+1);
        scanf("%d", &array[i]);
    }

    printf("\n Your entered array is : ");
    for(i=0; i<n; ++i)
    {
        printf("%d,", array[i]);
    }

    if(sorted(array, n)==1)
    {
        printf("\n\n Your array is sorted.\n");
    }
    else
    {
        printf("\n\n Your array is not sorted.\n");
    }
    
    
    return 0;
}