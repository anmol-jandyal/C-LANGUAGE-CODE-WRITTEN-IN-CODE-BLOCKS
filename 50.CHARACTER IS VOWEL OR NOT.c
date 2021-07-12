/*---------TO CHECK CHARACTER IS VOWEL OR NOT-------*/

#include<stdio.h>
void main()
{
 char ch;
 printf("ENTER THE CHARACTER TO CHECK WHETHER IT IS VOWELOR NOT:");
 scanf(" %c",&ch);

 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
   printf("\n\nTHE GIVEN CHARACTER IS A VOWEL.");
 else
   printf("\n\nTHE GIVEN CHARACTER IS not A VOWEL.");
 getch();
}
