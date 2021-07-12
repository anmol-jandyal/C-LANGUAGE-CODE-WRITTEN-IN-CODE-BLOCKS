/*-----FACTORIAL USING FUNCTION------*/

#include<stdio.h>

void fac(int);    //fac()is a function for factorial. FUNCTION DECLARATION

void main()
{
 int n;
 printf("ENTER THE NO. WHOSE FACTORIAL YOU WANT:");
 scanf("%d",&n);
 fac(n);              //fac() is called and value of n is passed.
 getch();
}


void fac(int x)
{
  int i,product=1;
  if(x==0)
   printf("\n\nFACTORIAL OF %d is 1",x);
  else
   {
     for(i=1;i<=x;i++)
       product=product*i;
     printf("\n\nFACTORIAL OF %d is %d.",x,product);
   }
}

