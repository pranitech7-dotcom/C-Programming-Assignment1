#include<stdio.h>
#include<conio.h>
void main()

{
    int roll_no ,m1,m2,m3 ,total ;
    float percent ;
    char name[20];

    printf("\nEnter name of the student :");
    scanf("%s",&name);

    printf("\nEnter roll no of student :");
    scanf("%d",&roll_no);

    printf("\nEnter marks of three students :");
    scanf("%d%d%d",&m1,&m2,&m3);
    
    
    total = m1 + m2 + m3 ;

    percent = total / 3.0 ;


    printf("\n****Student record****");
    printf("\nname of student:%s",name);
    printf("\nroll no of student:%d",roll_no);
    printf("\nTotal :%d", total);
    printf("\npercentage :%f", percent);
    getch();
}