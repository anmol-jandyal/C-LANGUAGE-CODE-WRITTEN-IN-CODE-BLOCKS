/*--------TO CHECK WHETHER THE TRINGLE IS ISOSCELES, EQUILATERAL OR SCALENE-------- */
#include<stdio.h>
void main()
{
 float s1,s2,s3;
 printf("ENTER THE LENGTH OF SIDES:");
 printf("\n\nENTER THE LENGTH OF SIDE 1:");
 scanf("%f",&s1);
 printf("\nENTER THE LENGTH OF SIDE 2:");
 scanf("%f",&s2);
 printf("\nENTER THE LENGTH OF SIDE 3:");
 scanf("%f",&s3);

 if((s1+s2+s3)==3*s2)
  printf("\n\nTHE TRIANGLE IS EQUILATERAL.");
 else if(s1==s2||s3==s2||s1==s3)
  printf("\n\nTHE TRIANGLE IS ISOSCELES.");
 else
  printf("\n\nTHE TRIANGLE IS SCALENE.");
getch();
}
