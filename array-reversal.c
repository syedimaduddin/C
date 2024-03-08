#include<stdio.h>

void arr_reversal(int array[]){

    for(int i=0; i<7/2; i++)
    {
        int temp[20];
        temp[i] = array[i];
        array[i] = array[6-i];
        array[6-i] = temp[i];
    }
}

int  main(){
    int arr[] = {1,2,3,4,5,6,7};

    printf("Before Reversing the array\n");

    for(int i=0; i<7; i++)
    {
        printf("The value of element %d is: %d\n", i, arr[i]);
    }

    arr_reversal(arr);

    printf("After Reversing the array\n");

    for(int i=0; i<7; i++)
    {
        printf("The value of element %d is: %d\n", i, arr[i]);
    }

    return 0;
}