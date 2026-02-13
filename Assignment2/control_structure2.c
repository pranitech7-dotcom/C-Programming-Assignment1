#include<stdio.h>
#include<conio.h>
void main()
{
    int age ;

    printf("\nEnter age of the person:");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("\nyou are eligible for voting ");
    }
    else {
        printf("\nyou are nit eligible for voting");
    }

    getch();
}