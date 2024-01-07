#include<stdio.h>
int isDouplicated(char *str) {
   int i,j;
         for (i=0; str[i]!='\0'; i++) {
           for ( j=i+1 ;str[i]!='\0'; j++) {

  if (str[i] == str[j]) 
    return 1 ; // if found
}//j
}//i
   return 0; // if not found 

}//method


int main(){
char List [100];

printf("Enter a string: ");
scanf("%s",List);
 
if (isDouplicated (List) )
printf("the string has al least one duplicated charateter \n"); 
else 
printf(" there is no duplicated charatete \n"); 

//print SECOND char

if (List[1] != '\0') 
printf("the second char in the string is : %c \n", *(List+1));
else 
printf("there is no second char");


return 0; }//main
