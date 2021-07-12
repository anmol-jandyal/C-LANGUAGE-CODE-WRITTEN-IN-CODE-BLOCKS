/*-------TABLE OF THE GIVEN NO.-------*/
#include<stdio.h>
void main()
{
 int n,x,i;
 printf("ENTER THE NO. WHOSE TABLE YOU WANT:");
 scanf("%d",&n);
 printf("ENTER UPTO WHICH YOU MULTIPLICATION:");
 scanf("%d",&x);

 printf("\n\n\nTABLE OF %d UPTO %d:\n\n",n,x);

 for(i=1;i<=x;i++)
  printf(" %d * %d  = %d\n",n,i,i*n);

 getch();
}
