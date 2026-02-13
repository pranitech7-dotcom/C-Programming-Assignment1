#include<stdio.h>
#include<conio.h>
void main ()
{
    int no ;

    printf("\nEnter no :");
    scanf("%d",&no);

    if (no%7==0 && no%5==0){
        printf("\nno is divisible by 7 and 5");
    }
    // must be divided by both
    else
    {
        printf("\n given no cant be divisible by 7 and 5");
    }
    getch();

}