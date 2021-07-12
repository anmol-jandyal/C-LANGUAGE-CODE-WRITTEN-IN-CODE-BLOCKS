/*-------PRINTING FLOYDS TRIANGLE--------
    1
    01
    101
    0101......*/
#include<stdio.h>
void main()
{
 int n,i,j;
 printf("ENTER THE NO OF ROWS YOU WANTS:");
 scanf("%d",&n);
 printf("\n\n\nFLOYDS TRIANGLE\n\n");
 for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
     if((i+j)%2==0)
      printf("1 ");
     else
      printf("0 ");
     printf("\n");
  }
  getch();
}
