#include<stdio.h>

void main()
{
  char ch;
  printf("\nEnter a character\n");
  scanf(" %c",&ch);

  switch(ch)
  {
     case 'a':printf("\nIts vowel %c",ch);
              break;
     case 'e':printf("\nIts vowel %c",ch);
              break;
     case 'i':printf("\nIts vowel %c",ch);
              break; 
     case 'o':printf("\nIts vowel %c",ch);
              break; 
     case 'u':printf("\nIts vowel %c",ch);
              break; 
     case 'A':printf("\nIts vowel %c",ch);
              break;
     case 'E':printf("\nIts vowel %c",ch);
              break;
     case 'I':printf("\nIts vowel %c",ch);
              break; 
     case 'O':printf("\nIts vowel %c",ch);
              break; 
     case 'U':printf("\nIts vowel %c",ch);
              break; 
       
     default:printf("\nIt not vowel");         

  }
  getch();
}