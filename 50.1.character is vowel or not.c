/*---------TO CHECK CHARACTER IS VOWEL OR NOT-------*/
#include<stdio.h>
void main()
{
 char ch;
 printf("ENTER THE CHARACTER TO CHECK WHETHER IT IS VOWEL OR NOT:");
 scanf(" %c",&ch);

 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
   printf("");
 switch(ch)
  {
    case'a':
     printf("\n\nTHE GIVEN CHARACTER IS A VOWEL.");
     break;


    case'e':
     printf("\n\nTHE GIVEN CHARACTER IS A VOWEL.");
     break;

    case'i':
     printf("\n\nTHE GIVEN CHARACTER IS A VOWEL.");
     break;

    case'o':
     printf("\n\nTHE GIVEN CHARACTER IS A VOWEL.");
     break;

    case'u':
     printf("\n\nTHE GIVEN CHARACTER IS A VOWEL.");
     break;

    default:
     printf("\n\nTHE GIVEN CHARACTER IS not A VOWEL.");
  }
 getch();
}
