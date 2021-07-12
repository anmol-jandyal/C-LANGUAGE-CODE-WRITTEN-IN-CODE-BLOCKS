/*-------EVALUATING THE SERIES 1 + X + X^2/2! X^3/3! + ......
FOR GIVEN VALUE OF X AND GIVEN NO.S OF TERMS*/
#include<stdio.h>
void main()
{
 int i,n,x,j;
 float sum=0,a,b;
 printf("ENTER THE VALUE OF X:");
 scanf("%d",&x);
 printf("ENTER THE NO.S OF TERMS:");
 scanf("%d",&n);
 printf("\n\n THE SERIES IS AS:\n 1 + X + X^2/2! + X^3/3! + .....\n WHERE  X=%d \n  no. of terms = %d",x,n);
 for(i=0;i<n;i++)
  {
    if(i==0)
     sum=1;
    else
      {
       a=1;b=1;
       for(j=1;j<=i;j++)
        {
         a=a*x;                //for x,x^2, x^3 etc
         b=b*j;                //for factorial.
        }
       sum=sum+a/b;
      }
   }
  printf("\n\n SUM = %f",sum);
  getch();
}
