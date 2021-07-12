/*---------STAR PATTERN--------*/
#include<stdio.h>
void main()
{
 int n,i,j,k;
 printf("ENTER THE NO. OF ROWS IN STAR PATTERN YOU WANT:");
 scanf("%d",&n);

 for(i=n;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    {
     if(j==1)
      for(k=1;k<=n-i;k++)
       printf(" ");                 //NOT IN CURELY BRACES AS ONLY ONE STATEMENT.

      printf("* ");
    }
     printf("\n");
  }
  getch();
}
