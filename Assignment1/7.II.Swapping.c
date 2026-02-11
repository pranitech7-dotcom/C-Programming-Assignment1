#include<stdio.h>
#include<conio.h>
void main()
// swapping using three variables .

{
    int a , b , temp ;
    printf("\n before swapping ");
    printf("\n Enter value of a :");
    scanf("%d",&a);

    printf("\n Enter value of b :");
    scanf("%d", &b);

    temp = a ;
    a = b;
    b = temp ;

    printf("\n after swapping :");
    printf("\n a= %d  \t b=%d", a ,b);

    getch();
}