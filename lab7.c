#include <stdio.h>

struct Book {
   int ISBN;
   char authors[100] ;
   int pages; 
 } ;
 
void printAllBookInfo(struct Book *list );

int size;

int main() {
   printf("Enter number of customer :"); 
   scanf("%d" , &size); 
  
   struct Book list[size] ; 
   
   int i ;
   for( i = 0 ; i < size ; ++i ) {
      printf("\nEnter customer #%d ISBN: " , (i+1) );
      scanf("%d" , &list[i].ISBN );
      
      printf("Enter author name:");
      scanf("%s", list[i].authors ) ; 
           
       printf("Enter num of pages: ");
       scanf("%d" , &list[i].pages );
       }// for
       
  printAllBookInfo( list ) ; 
   return 0 ;
}

void printAllBookInfo(struct Book *list ){
   int i ; 
   for( i = 0 ; i < size ; ++i ){
   
      printf("\nName of authors: %s \n" , (list+i)->authors);
      printf("ISBN: %d \n" , (list+i)->ISBN);
      printf("pages : %d \n" , (list+i)->pages);
   }
} 