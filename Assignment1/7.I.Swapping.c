#include<stdio.h>
#include<conio.h>
void main ()
// swapping of two elements 

{ 
    int  a ,b ;
    printf("\n before swapping ");
    printf("\n enter value of a :");
    scanf("%d",&a);
    printf("\n Enter value of b :");
    scanf("%d", &b );
    a = a + b ;
    // 20 + 30 = 50
    b = a - b ;
    // 50 - 30 = 20
    a = a - b ;
    

    printf("\n after swapping ");
    printf("\n value of a = %d \t b = %d",a , b);
    getch();

}