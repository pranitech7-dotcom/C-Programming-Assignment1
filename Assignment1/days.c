#include<stdio.h>
#include<conio.h>
void main()
{
    int d,m,y,days ;
    printf("\nEnter days :");
    scanf("%d",&days);

    y = (days/365);
    m = (days%365)/30  ;       
    d = (days%365)% 30 ;
    

    printf("\nyear = %d  \t months = %d  \t days =%d ",y,m,d );
    getch();
}