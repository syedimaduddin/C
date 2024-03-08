#include<stdio.h>
#include<string.h>
int main(){
   int i,j,n;
   char string[100][100],string2[100];
   printf("Enter number of names you want to sort :\n");
   scanf("%d",&n);
   printf("Enter names in any order:\n");
   for(i=0;i<n;i++){
      scanf("%s",string[i]);
   }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(string[i],string[j])>0)      // "strcmp" compares two strings and return 0 if both strings are same
         {
            strcpy(string2,string[i]);             // "strcpy" copy one string(source) to another(destination) -> strcpy(destination, source)
            strcpy(string[i],string[j]);
            strcpy(string[j],string2);
         }
      }
   }
   printf("\nThe sorted order of names are:\n");
   for(i=0;i<n;i++){
      printf("%s\n",string[i]);
   }
   return 0;
}