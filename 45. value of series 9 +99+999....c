/*------finding the value of series :
    9 + 99 + 999 + ..........
    for given value of terms*/

#include<stdio.h>
void main()
{
 int n,i,y=1,x,sum=0;
 printf("ENTER THE NO.S OF TERMS FOR SERIES 9 + 99 + 999 +.... :");
 scanf("%d",&n);
 printf("\n\n");
 for(i=1;i<=n;i++)
  {
    y*=10;
    x=y-1;
    if(i<n)
     printf("%d + ",x);
    else
     printf(" %d",x);
    sum=sum+x;
  }
  printf(" IS EQUAL TO : %d",sum);
}
