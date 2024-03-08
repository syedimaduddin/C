#include<stdio.h>
int main()
{
    int i, mark, n;
    
    printf("\n Total English Marks : 100 \n");

    for(mark=0; mark<=n; mark++)
    {
        printf("\n Enter your English marks : ");
        scanf("%d", &mark);
        
        if(mark<33)
        {
            printf("\n You are failed in English.\n");
            break;
        }
        else if (mark>100)
        {
            printf("\n You entered wrong marks.\n");
            continue;
        }
        else
        {
            printf("\n You are passed in English.\n");
            break;
        }
    }
    return 0;
}