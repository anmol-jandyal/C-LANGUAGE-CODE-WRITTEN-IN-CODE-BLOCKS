/*-------NO.S PATTERN--------*/
#include<stdio.h>
void main()
{
 int n,i,j;
 printf("ENTER THE NO. OF ROWS YOU WANTS:");
 scanf("%d",&n);
 printf("\n\n  NO.S PATTERN\n\n");
 for(i=1;i<=n;i++)
  {
   for(j=1;j<=i;j++)
    printf("%d  ",i);

   printf("\n");
  }
 getch();
}
