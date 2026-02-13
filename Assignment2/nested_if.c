#include<stdio.h>
#include<conio.h>
void main()
{
    int age , w ;

    printf("\nEnter age :");
    scanf("%d",&age);

    printf("\nEnter weight:");
    scanf("%d",&w);

    if (age >= 18){
        if(w>=45){
            printf("\nYou are eligible for voting");
        }
        else {
            printf("\nYou are not eligible for voting coz of underweight ");
        }
    }
    else {
        printf("\nAge is invalid , you are not eligible");
    }
    getch();
}