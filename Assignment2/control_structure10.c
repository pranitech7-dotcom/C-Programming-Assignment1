#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c ;

    printf("\n Enter value for a :");
    scanf("%d",&a);

    printf("\n Enter value for b :");
    scanf("%d",&b);

    printf("\n Enter value for c :");
    scanf("%d",&c);

    if (a > c && a > b){
        printf("\n A is big : %d",a);
    }
    else if (b >a && b >c ){
        printf("\n B is big :%d",b);
    }
    else {
        printf("\n C is big:%d",c);
    }
    
    if (a < c && a < b){
        printf("\n A is small:%d ",a);
    }
    else if (b <a && b <c ){
        printf("\n B is small:%d",b);
    }
    else if ( c <a && c < b){
        printf("\n C is small:%d",c);
    }
    else {
        printf("\n Number is invalid");
    }
    getch();

}