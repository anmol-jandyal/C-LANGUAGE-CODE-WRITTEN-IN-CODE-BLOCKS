/*     ................ASCII CODE OF DIFFERENT CHARACTER(i.e. SYMBOLS).....................
            [where ASCII - American Standard Code for Information Interchange]
*/

#include<stdio.h>
void main()
{
 char ch;
 int i;                            // here as 'c' is of char type so firstly it is converted to ASCII code and it is stored in 'i'.
 printf("ENTER THE CHARATER WHOSE ASCII YOU WANT TO KNOW\n");
 scanf(" %c",&ch);
 i=ch;
 printf("\n\nTHE ASCII CODE OF CHARACTER '%c' IS EQUAL TO %d ",ch,i);
 getch();
}


/*
 OTHER METHOD TO DETERMINE THE ASCII VALUE OF A GIVEN CHARACTER--
 WE CAN MAKE THIS PROGRAM WITHOUT DECLAREING INT VARIABLE i.e.-
 char ch;
 Then take the input
 Then
 printf("the ASCII code of %c is equal to %d",ch,ch);

 HERE FIRSTLY AT %c VALUE OF ch printed AND AT %d the ASCII VALUE OF CH PRINTED.
*/
