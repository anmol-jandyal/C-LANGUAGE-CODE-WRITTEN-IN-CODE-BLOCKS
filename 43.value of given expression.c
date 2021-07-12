/*-----PROGRAM TO FIND THE VALUE OF:
  1 - X^2/2! + X^4/4! - X^6/6! + ...........
  FOR GIVEN NO. OF TERMS AND VALUE OF X */

#include<stdio.h>
void main()
{
 int i,n,j;
 float x,a,b,sum=0;

 printf("ENTER THE VALUE OF X:");
 scanf("%f",&x);

 printf("ENTER THE NO.S OF TERMS:");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
   if(i==0)
    sum=sum+1;
    else
      {
        a=1;b=1;
        for(j=1;j<=i*2;j++)
        {
          a=a*x;                // to get values like x^2, x^4,x^6.....
          b=b*j;                // to get factorial of even no.s
        }
    if(i==1)
      sum=sum-a/b;
   else if(i%2==0)
      sum=sum+a/b;
   else
      sum=sum-a/b;
      }
 }
 printf("\n\n\nTHE VALUE OF \n\n 1 - X^2/2! + X^4/4! - ...... FOR GIVEN VALUE OF X AND NO. OF TERMS");
 printf(" GIVEN AS : \n %f",sum);
 getch();
 }


