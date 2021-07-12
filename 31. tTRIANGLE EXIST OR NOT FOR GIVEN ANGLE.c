/*---------CHECKING WHETHER THE TRIANGLE EXIST FOR GIVEN ANGLES---------*/
#include<stdio.h>
void main()
{
 int a,b,c;
 printf("TRIANGLE EXIST IF SUM OF ALL ANGLE = 180 DEGREE.\n\n");
 printf("ENTER THE ANGLES OF THE TRIANGLE TO CHECK WHETHER IT EXIST OR NOT.\n\n");
 printf("ENTER ANGLE 1");
 scanf("%d",&a);
 printf("ENTER ANGLE 2");
 scanf("%d",&b);
 printf("ENTER ANGLE 3");
 scanf("%d",&c);

 if(a+b+c==180)
  printf("THE TRIANGLE EXIST FOR GIVEN ANGLES");
 else
  printf("THE TRIANGLE not EXIST FOR GIVEN ANGLES");

getch();
}
