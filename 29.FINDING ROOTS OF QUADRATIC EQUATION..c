/*---------TO DETERMINE THE ROOTS OF QUADRTIC EQUATION--------*/
#include<stdio.h>
#include<math.h>
void main()
{
 float a,b,c,x,y;
 printf("AS QUADRATIC EQUATION IS OF FORM:-\n\n a x^2 + b x + c=0\na, b & c ARE THE CONSTANTS AND x IS A VARIABLE WHOSE ROOTS WE HAVE TO FIND.");
 printf("ENTER THE VALUE OF a:");
 scanf("%f",&a);
 printf("ENTER THE VALUE OF b:");
 scanf("%f",&b);
 printf("ENTER THE VALUE OF c:");
 scanf("%f",&c);

 printf("\n\nYOUR QUADRATIC EQUATION IS:\n (%f).x^2 + (%f).x + (%f) = 0 ",a,b,c);
 if(b*b-4*a*c>=0)
 {
 x=(-b-sqrt(b*b-4*a*c))/2*a;          //sqrt() IS PRESENT IN math.h AND USED FOR SQUARE ROOT.
 y=(-b+sqrt(b*b-4*a*c))/2*a;
 printf("\n\n\nTHE ROOTS OF GIVEN EQUATION ARE:\n %f and %f",x,y);
 }
 else
   printf("\n\n\nNO ROOTS FOR GIVEN EQUATION");
    getch();
}
