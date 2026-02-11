#include<stdio.h>
#include<conio.h>
void main ()
{

    int height , base ;
    float area  ;
    printf("\n Enter the height :");
    scanf("%d",&height);
    printf("\n Enter the base :");
    scanf("%d",&base);

    area = 0.5 * height * base ;


    printf("\n area of triangle is :%f",area);

    getch();
}