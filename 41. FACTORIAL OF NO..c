/*------FINDING FACTORIAL OF GIVEN NO.---------*/
#include<stdio.h>
void main()
{
 int n,i,x=1;
 printf("ENTER THE NO. OF WHOSE FACTORIAL IS NEEDED:");
 scanf("%d",&n);
 if(n<0)
  printf("\n\nTHE NO. IS NEGATIVE AND ITS FACTORIAL IS UNDEFINED.");
 else if(n==0)
  printf("\n\n THE FACTORIAL OF 0 is given as:\n 0 ! = 1");
 else
 {
  for(i=2;i<=n;i++)
   x*=i;
  printf("\n\n\nTHE FACTORIAL OF %d IS:\n\n %d ! = %d",n,n,x);
 }
 getch();
}
