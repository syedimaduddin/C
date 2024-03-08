#include<stdio.h>
#include<string.h>

int main(){
    char string1[] = "Syed";
    char string2[] = "Imad";
    char string3[20];
    
    printf("The strcmp for string1 and string2 returned: %d\n",  strcmp(string1, string2));     // for the same values strcmp return 0 and for different values strcmp return any positive or negative value
    strcpy(string3, strcat(string1, string2));
    printf("New string using concatenation of string1 and string2: %s\n", string3);
    puts(strcat(string1, string2));
    printf("The length of string1 is: %d\n", strlen(string1));
    printf("The reverse of string1 is: %s\n", strrev(string1));


    // code to write "str1 is a friend of str2"
    char str1[20];
    char str2[20];
    scanf("%s", &str1);
    scanf("%s", &str2);
    char str3[] = " is a friend of ";

    strcat(str1, str3);
    strcat(str1, str2);

    printf("%s", str1);


    return 0;

}