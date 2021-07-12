/*------THKING INPUT OF 5 INTEGERS AND ADDING ODD AND EVEN SEPARATELY---------*/
#include<stdio.h>
void main()
{

 int i=1,a[20],sum1=0,sum2=0;          //WE USE THE ARRAY a[20] HERE
  for(i=1;i<=5;i++)
 {
  printf("ENTER THE VALUES OF %d INTEGERS i.e. a[%d]:",i,i);
  scanf("%d",&a[i]);
 }
 i=1;
 while(i<=5)
  {
    if(a[i]%2==0)
     sum1=a[i]+sum1;
   else
     sum2=a[i]+sum2;
   i++;
  }

 printf("THE SUM OF ODD INTEGERS =%d",sum2);
 printf("\n\nTHE SUM OF EVEN INTEGERS =%d",sum1);
 getch();
}
