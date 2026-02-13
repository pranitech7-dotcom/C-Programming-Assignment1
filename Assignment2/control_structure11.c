#include<stdio.h>
#include<conio.h>
void main()
{
    int age ;

    printf("\n Enter your age here :");
    scanf("%d",&age);

    if ( age <= 0){
        printf("\n age is invalid");
    }
    else if ( age <= 12 ){
        printf("\n you are child");
    }
    else if (age <= 20){
        printf("\n you are tenager , enjoy your life ");
    }
    else if ( age <= 39){
        printf("\n You are responsible adult ");
    }
    else if(age <= 69){
        printf("\nYou are senior citizen");
    }
    else {
        printf("\nEnough on earth, better to check out");
    }
    getch();
}