/*---------TO PRINT N NATURAL NO.S AND PRINTING THEIR SUM----------*/
#include<stdio.h>
void main()
{
 int n,i,sum=0;
 printf("ENTER THE NO. UPTO WHICH YOU WANT THE NATURAL NO.S AND THEIR SUM:");
 scanf("%d",&n);
 i=1;
 printf("THE FIRST %d NATURAL NO.S ARE:\n\n",n);
 while(i<=n)
 {
  printf("%d   ",i);
  sum=sum+i;
  i++;
 }
 printf("\n\nSUM OF FIRST %d NATURAL NO.S IS: %d.",n,sum);
 getch();
}
