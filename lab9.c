#include <stdio.h>
#include <stdlib.h>

struct Pet{
   int ID; 
   char Type[10]; 
};


void printAllPetsInfo( );

int main() {
   FILE* fp = fopen("pet.txt", "r");
   if (fp == NULL) {
      printf("can't open file\n"); 
      return -1; 
   }
   
   int numberOfLines = 0; 
   char temp[10]; 
   
   while(fgets (temp, 10, fp)) {
   numberOfLines++;
   } 
   fclose(fp); 
   
   struct Pet *list = (struct Pet*)calloc(numberOfLines, sizeof(struct Pet));
   fp = fopen("pet.txt", "r");
   
   int i; 
   for (i = 0; i < numberOfLines; i++) {
      fscanf(fp, "%d %s", &(list+i)->ID, (list+i)->Type);
   }
   fclose(fp); 
   
   printAllPetsInfo( list , numberOfLines ); 
   
}//End main

void printAllPetsInfo(struct Pet *list, int num){
   int i; 
   for(i = 0; i < num; i++)
      printf("Id: %d, type: %s \n", (list+i)->ID, (list+i)->Type); 
}