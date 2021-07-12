/*---------TAKE TWO NO.S MAY BE INT OR FLOAT AND CHECK WHETHER NO. IS MULTIPLE OF OTHER NO. OR NOT------ */
#include<stdio.h>
#include<math.h>

void main()
{
 float a,b;
 printf("ENTER THE VALUE OF a");
 scanf("%f",&a);
 printf("ENTER THE VALUE OF b");
 scanf("%f",&b);

 if(fmod(a,b)==0)
  printf("\n%f is a multiple of %f.",a,b);
 else if(fmod(b,a)==0)
  printf("\n%f is a multiple of %f.",b,a);
 else
 printf("THE ARE NOT THE MULTIPLES");

 getch();
}
