#include <stdio.h>
#include <string.h>

int main(){
   char W1[100];
   char W2[100];
   
   printf("Enter a string: ");
   scanf("%s",W1);
   
 getchar();
 
   printf("Enter a another string: ");
   scanf("%s",W2);

   char* position = strstr(W1,W2);
   if(position!=NULL) {
      int p = strlen(W1) - strlen(position);
      printf("1- First occurrence of %s is in position \#%d \n",W2, p);
   }
   else {
      printf("w2 not found in w1 \n");
   }
   return 0;}

