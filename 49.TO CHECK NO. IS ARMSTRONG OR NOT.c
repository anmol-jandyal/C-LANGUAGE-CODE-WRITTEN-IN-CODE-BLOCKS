#include<stdio.h>
void main()
{
 int n,x,a,sum=0;
 printf("ENTER THE NO. TO CHECK WHETHER IT IS PALINDROME OR NOT:");
 scanf("%d",&n);
 a=n;
 while(a!=0)
 {
  x=a%10;                            //THIS GIVE THE LAST DIGIT OF THE NUMBER.
  sum=sum+x*x*x;
  a=a/10;                            // IF n=123 THEN n/10=12 as n and 10 are integers.
 }
 if(sum==n)
  printf("\n\nTHE NO. 'i.e %d' IS ARMSTRONG.",n);
 else
  printf("\n\nTHE NO. 'i.e %d' IS NOT ARMSTRONG.",n);
 getch();
}
