// Structures allowed us to combine data of different types
// It is used to create complex data type which contains diverse information

#include<stdio.h>

struct Student
{
    int id;
    char name[20];
    float marks;
    char fav_char;
};

int main(){

    struct Student s1;
    printf("Enter your id: ");
    scanf("%d", &s1.id);
    printf("Enter your name: ");
    scanf("%s", s1.name);
    printf("Enter your favorite character: ");
    scanf(" %c", &s1.fav_char);
    printf("Enter your marks: ");
    scanf("%f", &s1.marks);

    printf("\n\n********** Your Details ************\n");
    printf("Your id: %d\n", s1.id);
    printf("Your name: %s\n", s1.name);
    printf("Your favorite character: %c\n", s1.fav_char);
    printf("Your marks: %.2f\n", s1.marks);

    return 0;
}
