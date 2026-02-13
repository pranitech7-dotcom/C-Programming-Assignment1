#include<stdio.h>
#include<conio.h>
void main ()

{
    int no ;
    printf("\nEnter number :");
    scanf("%d",&no);

    if (no >= 10 && no <= 99){
        printf("\n given no is 2 digit");
    }
    else if ( no <= 9 && no >=0){
        printf("\n Given no is 1 digit");
    }
    else{
        printf("\n given no is no 1 digit and 2 digit ");
    }
    
    getch();
}