#include <stdio.h>
#include <stdlib.h>

int main() {
    char size;
    char grades;

    printf("Enter number of students: ");
    scanf("%d", &size);

        char *a = (char *) malloc( sizeof(char) * size);

      int i;
      for ( i = 0; i < size; i++) {
        printf("Enter the grade of student #%d: ", i);
        scanf(" %c", &grades) ;
        *(a + i) = grades;
    }

       printf("The marks are:\n");
       
       int j;
       for ( j = 0; j < size; i++) {
        printf("Mark of student #%d = %c\n", j + 1, *(a + j));
    }
          free(a);
    return 0; }
    