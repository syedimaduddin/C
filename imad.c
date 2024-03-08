#include<stdio.h>

struct book
{
    char name[30];
    float price;
    int pages;
};

int main()
{    
    int n;

    printf("Enter no. of books you want to tally : ");
    scanf("%d", &n);
    struct book b[10];

    for(int i=0; i<n; i++)
    {
        printf("\nEnter book name : ");
        scanf("%[^\n]%*c", b[i].name);
        printf("Enter book price : ");
        scanf("%f%*c", b[i].price);
        printf("Enter pages of book : ");
        printf("%d%*c", b[i].pages);
    }

    for(int i=0; i<n; i++)
    {
        printf("\n%s\t%f\t%d", b[i].name, b[i].price, b[i].pages);
        printf("\n");
    }   

    return 0; 
    
}