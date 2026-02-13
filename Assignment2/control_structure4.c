#include<stdio.h>
#include<conio.h>

void main ()

{
    int no ;

    printf("\nEnter number :");
    scanf("%d",&no);


    if(no%2==0)
    {
        printf("given no is even");
    }
    else 
    {
        printf("given no is odd");
    }
}