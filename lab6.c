#include <stdio.h>
#include <stdlib.h>

void more_Grades(float *Grades , int size , int sizeBytes);

int main(){
    int count = 0;
    float grade ; 

printf("Enter the Number of students:");
int size ;
scanf("%d" , &size );

float *a = (float *)malloc( sizeof(float) * size);
int i ; 
for( i = 0 ; i < size ; i++) {
   printf("Enter the student %d grade: ",i+1);
   scanf("%f" , &grade);
   *(a+i) = grade ; 
}

 more_Grades(a , size , sizeof(a)) ; 
return 0 ; 
} //main


void more_Grades(float *Grades , int count , int sizeBytes){
float grade ; 

do {
printf ("Enter the student %d grade: " , count+1);
scanf("%f", &grade);

if ( grade < 0 ) 
break; 

count++;

Grades=(float*)realloc(Grades, count * sizeof(float));
*(Grades + (count-1) ) = grade;

} while (grade >= 0);

int i ; 
printf("The number of students in the dynamic Grade list is %d \n", count);
printf("The grades in the dynamic list: ");
for (i =0 ;i < count;i++)
printf ("%.3f ",*(Grades+i));
printf("\nThe size of the dynamic list is  %d bytes.\n" , sizeof( Grades)*count );

free (Grades);
}


