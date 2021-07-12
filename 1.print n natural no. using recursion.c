/*---print n natural no. using recursion---*/

#include<stdio.h>

int natural(int);

void main()
{
 int n;
 printf("ENTER THE NO. UPTO WHICH YOU WANT NATURAL NO.:");
 scanf("%d",&n);
 natural(n);
 getch();
}

int natural(int a)
{
 int s;
 if(a==1)
 {
  printf("%d  ",a);
  return a;
 }
 s=1+natural(a-1);            //as next natural no. = 1 + previous no.
 printf("%d  ",s);
 return s;
}
