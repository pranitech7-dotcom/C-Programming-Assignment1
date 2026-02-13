#include<stdio.h>
#include<conio.h>
void main()
{
    int a,num;

    printf("\nEnter your no:");
    scanf("%d",&num);

    printf("\nEnter your choice\n(1.positive / negative)\n(2. even / odd)");
    scanf("%d",&a);

    switch(a)
    {
        case 1:if(num>0)
                    {
                        printf("\npositive");
                    }
                    else
                    {
                        printf("\nnegative");
                    }
                    break;
        case 2: if(num%2==0){
                    printf("\neven number");}
                    else
                    {
                        printf("\nodd number");
                    }
                    break;
        default :
                printf("\nzero number");

    }
    getch();
}