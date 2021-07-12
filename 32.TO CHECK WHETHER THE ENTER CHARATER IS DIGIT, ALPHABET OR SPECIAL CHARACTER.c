/*-----------TO CHECK WHETHER THE ENTER CHARATER IS DIGIT, ALPHABET OR SPECIAL CHARACTER-------- */
#include<stdio.h>
void main()
{
 int x;
 char c;
 printf("ENTER THE CHARACTER TO CHECK WHETHER THE ENTER CHARATER IS DIGIT, ALPHABET OR SPECIAL CHARACTER");
 scanf(" %c",&c);
 x=c;
 if((65<=x&&x<=90)||(97<=x&&x<=122))
  printf("\n%c IS AN ALPHABET.",c);
 else if(48<=x&&x<=57)
  printf("\n%c IS A DIGIT.",c);
 else if((35<=x&&x<=47)||(58<=x&&x<=64)||(91<=x&&x<=96)||(123<=x&&x<=126))
  printf("\n%c IS A SPECIAL CHARACTER.",c);
 else
  printf("\n%c IS AN EXTENDED CHGARACTER.",c);
getch();

}
