// functions used in dynamic memory allocation in heap
// 1) malloc(size_in_bytes)  "memory allocation"  -> initialise data with garbage value
// 2) calloc(n, size_in_bytes)  "contiguous allocation" -> initialise data with 0
// 3) realloc(ptr, new_size_in_bytes) "reallocation"
// 4) free()

// all above functions are defined in 'stdlib.h' library

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // use of malloc
    int* ptr1;
    ptr1 = (int*) malloc(3*sizeof(int));

    for(int i=0; i<3; i++)
    {
        printf("Enter the value no %d of array-1\n", i);
        scanf("%d", &ptr1[i]);
    }
    for(int i=0; i<3; i++)
    {
        printf("The value at %d of array-1 is: %d\n", i, ptr1[i]);
    }
    
    // use of calloc
    int* ptr2;
    ptr2 = (int*) calloc(3, sizeof(int));

    for(int i=0; i<3; i++)
    {
        printf("Enter the value no %d of array-2\n", i);
        scanf("%d", &ptr2[i]);
    }
    for(int i=0; i<3; i++)
    {
        printf("The value at %d of array-2 is: %d\n", i, ptr2[i]);
    }

    // use of realloc
    int* ptr3;
    ptr3 = (int*) realloc(ptr2, 2*sizeof(int));

    for(int i=0; i<2; i++)
    {
        printf("Enter the value no %d of array-3\n", i);
        scanf("%d", &ptr3[i]);
    }
    for(int i=0; i<2; i++)
    {
        printf("The value at %d of array-2 is: %d\n", i, ptr3[i]);
    }

    // free the dynamic memory
    free(ptr1);
    free(ptr3);

    return 0;
}
