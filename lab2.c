#include<stdio.h>

double ComputeTotalMark(double mark) {
    const double bouns = 0.001;
  if (mark >= 35)
    mark = mark + (mark * bouns);
  return mark;
}

int main() {

  double mark;
  double sumOfMark=0;
  int i;

  for(int i=0;i<4;i++)
  {
 printf("Enter your mark: ");
 scanf("%lf", &mark);
 sumOfMark = sumOfMark + mark ;
  }

  printf("The new mark = %lf", ComputeTotalMark(sumOfMark));
  return 0;
}