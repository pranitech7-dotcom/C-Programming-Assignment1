#include<stdio.h>
#include<conio.h>
void main()
{
    int no ;

    printf("\n Enter year :");
    scanf("%d",&no);

    if (no%4==0){
        printf("\ngiven yeas is leap year");
    }
    else {
        printf("\nGiven year is not leap year");
    }

    getch();
}