#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;

    printf("\n Enter character :");
    scanf("%c",&ch);

    if (ch == 'a' ||ch=='e'||ch=='i'||ch=='o'||ch=='u' || ch == 'A'|| ch=='E'||ch =='O'||ch=='U'){
        printf("\n Character is vowel");
    }
    else {
        printf("\n given character is not vowel");
    }
    getch();
}