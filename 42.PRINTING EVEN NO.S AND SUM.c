/*-----PRINTING FIRST N EVEN NO.S AND THEIR SUM------*/
#include<stdio.h>
void main()
{
 int n,i,x=0;
 printf("ENTER THE NO. OF TERMS YOU WANT IN PRINTING EVEN NO.S:");
 scanf("%d",&n);
 printf("\n\n\nTHE FIRST %d EVEN NOS ARE:\n\n");
 for(i=1;i<=n;i++)
  {
   printf("%d  ",i*2);
   x+=i;
  }
 printf("\n\nSUM = %d",2*x);
 getch();
}
