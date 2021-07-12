/*------NO. PYRAMID------*/
#include<stdio.h>
void main()
{
 int x=1,i,k,j,n;
 printf("ENTER THE ONO.S OF ROWS:");
 scanf("%d",&n);
 printf("\n\n\n----NO.S PYRAMID---\n\n");

 for(i=1;i<=n;i++)
  {
    for(k=1;k<=n-i;k++)
      printf(" ");
    for(j=1;j<=i;j++)
      printf("%d  ",x++);
    printf("\n");
  }
 getch();
}
