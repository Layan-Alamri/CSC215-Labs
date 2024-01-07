#include<stdio.h>

int main(){

    double price ;
    const double increse = 0.25;

    printf("Enter your sale price \n");
    scanf("%lf" ,&price);

    price = price - (price * increse);

    printf("your new price = %4.lf SR", price);

        return 0;
}
