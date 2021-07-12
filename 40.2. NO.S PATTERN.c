/*-------NO. PATTERN--------*/
#include<stdio.h>
void main()
{
 int n,i,j,x=1;
 printf("ENTER THE NO. OF ROW YOU WANT IN  NO. PATTERN:");
 scanf("%d",&n);
 printf("\n\n  NO. PATTERN:\n\n");

 for(i=1;i<=n;i++)
  {
   for(j=1;j<=i;j++)
    {
      printf("%d  ",x);
      x++;
    }
   printf("\n ");
  }
 getch();
}
