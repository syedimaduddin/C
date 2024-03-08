// Make 4X4 matrix by this using this program.

#include<stdio.h>

int main()
{
    int matrix[4][4];

    printf("\n Enter the values of Matrix : \n");

    for (int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {        
            printf(" Element %d,%d : ", i,j);
            scanf("%d", &matrix[i][j]);
        }       
    }
    printf("\n Your entered matrix is : \n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d    ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}