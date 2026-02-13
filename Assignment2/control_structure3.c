#include<stdio.h>
#include<conio.h>
void main()
{
    int no ;

    printf("\n Enter number :");
    scanf("%d",&no);

    if (no>0){
        printf("\nGiven no is positive");
    }
    else {
        printf("\nGiven no is negative");
    }

    getch();
}