/*---------pattern of star--------*/
#include<stdio.h>
void main()
{
 int n,i,j;
 printf("ENTER THE NO. OF ROW OF STARPATTERN YOU WANT:");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
  {
   for(j=1;j<=i;j++)                 // NOT USING CURELY BRACES AS THERE IS SINGLE STATEMENT IN THE BLOCK OF 'for loop'.
   printf("*\t");
   printf("\n");
  }
 getch();
}
