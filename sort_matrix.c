# include <stdio.h>

void sort_row(int row[10][10], int r, int c);

void sort_column(int column[10][10], int r, int c);

int main ()
{
    int r,c;
    scanf("%d", &r);
    scanf("%d", &c);

    int arr[10][10];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    sort_row(arr,r,c);
    sort_column(arr,r,c);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void sort_row(int row[10][10], int r, int c)
{
 
    int i=0;
    for(; i<r; i++)
    {
        for (int j = 0; j < c; ++j)
        {
            for (int k =(j + 1); k < c; ++k)
            {
                if (row[i][j] > row[i][k])
                {
                    int a;
                    a = row[i][j];
                    row[i][j] = row[i][k];
                    row[i][k] = a;                   
                }
            }
        }
    }
   
}

void sort_column(int column[10][10], int r, int c)
{
 
    int j=0;
    for(; j<c; j++)
    {
            for (int i = 0; i < r; ++i)
        {
            for (int k =(i + 1); k < r; ++k)
            {
                if (column[i][j] > column[k][j])
                {
                    int a;
                    a = column[i][j];
                    column[i][j] = column[k][j];
                    column[k][j] = a;                                  
                }
            }
        }      
    }
}