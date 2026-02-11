#include<stdio.h>
#include<conio.h>
void main ()
{
    // area of circle
    int r ;
    float area , circum ;

    printf("\n Enter the radius  :") ;
    scanf("%d",&r) ;
    area = 3.14 * r* r ;
    circum = 2* 3.14 * r ;
    printf("\n The area of circle is :%f",area);
    printf("\n The circumference of circle is :%f",circum);
    getch();

}