// Multiplication of matrices.

# include<stdio.h>
# include<stdlib.h>

int main()
{
    int a,b,c,e,sum=0;
    int arr[5][5],arr1[5][5],arr2[5][5];

    system("cls");                  // To clear screen.

    printf("Rows in first matrix : ");
    scanf("%d", &a);
    printf("Columns in first matrix : ");
    scanf("%d", &b);

    printf("Enter elements of first matrix : \n");
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            printf("Enter element at [%d,%d] : ", i,j);
            scanf("%d", &arr1[i][j]);
        }
    }
    
    printf("\nRows in second matrix : ");
    scanf("%d", &c);
    printf("Columns in second matrix : ");
    scanf("%d", &e);
    
    if(b!=c)
    {
        printf("Multiplication of these matrices is not possible.");
        printf("Please enter another matrices.\n");
    }
    else
    {
        printf("Enter elements of second matrix : \n");
        for(int i=0; i<c; i++)
        {
            for(int j=0; j<e; j++)
            {
                printf("Enter element at [%d,%d] : ", i,j);
                scanf("%d", &arr2[i][j]);
            }
        }

        printf("\nResultant matrix after multiplication : \n");
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<e; j++)
            {
                sum = 0;
                for(int k=0; k<b; k++)
                {
                    sum = sum + (arr1[i][k]*arr2[k][j]);
                }
                arr[i][j] = sum;
                printf("\t%d\t", arr[i][j]);            
            }
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}