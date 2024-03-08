#include<stdio.h>
#include<string.h>
int main(){
   
   // names[total number of names][length of each name]
   char names[10][20] = { "john", "arthur", "andy", "jones", "jane", "sovan", "sourav", "chegg", "christ", "anmol"};
   char s[10];
   for(int i=0;i<10;i++){
      for(int j=i+1;j<10;j++){
         if(strcmp(names[i],names[j])>0)      // "strcmp" compares two strings and return 0 if both strings are same
         {
            strcpy(s,names[i]);             // "strcpy" copy one string(source) to another(destination) -> strcpy(destination, source)
            strcpy(names[i],names[j]);
            strcpy(names[j],s);
         }
      }
   }
   printf("\nThe sorted order of names are:\n");
   for(int i=0;i<10;i++){
      printf("%s\n",names[i]);
   }
   return 0;
}