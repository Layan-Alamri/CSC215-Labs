#include <stdio.h>
#include <stdlib.h>

struct Book {
   int ISBN;
   char authors[100] ;
   int pages; 
};
 
void printAllBookInfointoFile(struct Book *list, int size);

int main() {
   int size;

   printf("Enter number of customer :"); 
   scanf("%d" , &size); 
  
   struct Book *list = (struct Book*)calloc(size, sizeof(struct Book));
   
   int i ;
   for( i = 0 ; i < size ; ++i ) {
      printf("\nEnter customer #%d ISBN: " , (i+1) );
      scanf("%d" , &(list+i)->ISBN );
      
      printf("Enter author name:");
      getchar();
      gets((list+i)->authors); 
           
      printf("Enter num of pages: ");
      scanf("%d" , &(list+i)->pages);
   }// for
       
   printAllBookInfointoFile( list,size ); 
   return 0 ;
}//main

void printAllBookInfointoFile(struct Book *list,int size ){
   FILE* fout = fopen("Lab8", "w");
   
   int i ; 
   for (i=0; i<size ; i++)
      if (!fwrite(( list+i ) , sizeof(struct Book), 1, fout)) {
         perror("Problem writing to file");
         return ;
      }
   fclose(fout);
}
