/*---------------SWAPPING WITHOUT TEMPERARY VARIABLE-----------*/
#include<stdio.h>
void main()
{
 int a,b;
 printf("ENTER THE VALUE OF a:");
 scanf("%d",&a);
 printf("\nENTER THE VALUE OF b:");
 scanf("%d",&b);
 printf("\n\nBEFORE SWAPING:\na=%d\tb=%d",a,b);

 a=a+b;
 b=a-b;
 a=a-b;

 printf("\n\nAFTER SWAPING:\na=%d\tb=%d",a,b);

 getch();
 }
