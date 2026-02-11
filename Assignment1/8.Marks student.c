#include<stdio.h>
#include<conio.h>
void main()
{
    int  English , math , science ,history , grammer ,total  ;
    float percentage ; 
    
    printf("\n Enter marks for english:");
    scanf("%d",&English );
    printf("\n Enter marks for math:");
    scanf("%d",&math ); 
    printf("\n Enter marks for science:");
    scanf("%d",&science );  
    printf("\n Enter marks for history:");
    scanf("%d",&history );
    printf("\n Enter marks for grammer:");
    scanf("%d",&grammer );

    total = English + math + science + history + grammer;
    percentage = total / 5;

    printf("\n Total marks: %d", total);
    printf("\n Percentage: %f", percentage);
    getch();
}