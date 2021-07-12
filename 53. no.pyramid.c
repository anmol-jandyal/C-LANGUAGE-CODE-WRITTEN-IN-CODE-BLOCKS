/*----NO. PYRAMID WITH SAME NO. IN ROW-------*/

#include<stdio.h>

void pyramid(int x)  //FOR PRINTING NO.S PYRAMID
{
 int i,j,k;
 for(i=1;i<=x;i++)
   {
     for(k=1;k<=x-i;k++)
       printf(" ");
     for(j=1;j<=i;j++)
       printf("%d ",i);
     printf("\n");
   }
}

void main()
{
 int n;

 printf("ENTER THE NO. rows in no. pyramid YOU WANT:");
 scanf("%d",&n);

 pyramid(n);           //pyramid() is called and value of n is passed.

 getch();
}
