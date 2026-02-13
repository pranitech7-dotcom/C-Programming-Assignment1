#include<stdio.h>
#include<conio.h>
void main(){
    char ch ;

    printf("\n Enter character here :");
    scanf("%c",&ch);

    if (ch >= 'A' &&  ch <= 'Z')
    {
        printf("\n character is upper case ");
    }  
    else 
        {
            printf("\n character is lower case ");
        }
    
    getch();

}