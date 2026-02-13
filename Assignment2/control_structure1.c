#include<stdio.h>
#include<conio.h>
void main()
{
    int a , b ;

    printf("\n Enter value for a  :");
    scanf("%d",&a);

    if (a>100)
    { 
         printf("\ngiven no is greater than 100");
    }
    else 
    {
            printf("\ngiven no is small than 100");
    }
    getch ();
}