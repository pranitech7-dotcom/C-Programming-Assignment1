#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;

    printf("\nEnter your stream (science/arts):");
    scanf("%s",&ch);

  

    switch(ch)
    {
        case 's':
            printf("\nEnglish \t Mathmatics \t biology",ch);
            break ;
        case 'a':
            printf("\neconomics \t commerce \t art",ch);
            break ;

        default :
            printf("\nstream invalid");
    }

    getch();

}