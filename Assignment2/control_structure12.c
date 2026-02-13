#include<stdio.h>
#include<conio.h>
void main()
{
    int s1,s2,s3 ;

    printf("\nEnter side 1 for triangle:");
    scanf("%d",&s1);
    printf("\nEnter side 2 for triangle:");
    scanf("%d",&s2);
    printf("\nEnter side 3 for triangle:");
    scanf("%d",&s3);

    if (s1 == s2 && s2 == s3 && s3 == s1){
        printf("\nthe triangle is equilateral triangle ");
    }
    else if(s1 == s2 || s2 == s3 || s3 == s1){
        printf("\nThe triangle is isoscles triangle");
    }
    else if((s1*s1 == s2*s2 + s3*s3) || (s2*s2 == s1*s1 + s3*s3) || (s3*s3 == s1*s1 + s2*s2)){
        printf("\nThe triangle is right angle triangle ");
    }
    else{
        printf("\nThe triangle is scalene triangle");
    }
    getch();
}