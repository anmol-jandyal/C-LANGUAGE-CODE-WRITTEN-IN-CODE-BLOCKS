\*---TO PRINT THE SUM OF N NATURAL NO.S----*/
#include<stdio.h>
int sum(int a)
{
 int s=0;
 if(a==1)
  return a;
 s=a+sum(a-1);
 return s;
}

int main()
{
  int n;
  printf("ENTER THE NO. UPTO WHICH YOU WANT SUM OF NATURAL NO.:");
  scanf("%d",&n);
  printf("sum = %d\n",sum(n));
  getch();
  return 0;
}
