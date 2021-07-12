/*----------CHECK THE NO.S IS PRIME OR NOT--------------*/

#include<stdio.h>
void main()
{
 int n,i;
 printf("ENTER THE NO. TO CHECK WHETHER IT IS A PRIME OR NOT:");
 scanf("%d",&n);

 if(n==1)
   printf("GIVEN NO. IS neither PRIME NO. nor composite.",n);
 else
  {
   for(i=2;i<=n/2;i++)                     //I<=N/2 BECAUSE n NOT DIVISIBLE BY ANY NO. GREATER THAN n/2.
     if(n%i==0)
      {
        printf("NOT PRIME NO.");          //WE DO NOT USE CURELY BRACES FOR for loop'S STATEMENT AS if and IT'S BLOCK OF STATEMENT ACT AS SINGLE STATEMENT.
        goto end;
      }
   printf("PRIME NO.");
   goto end;
  }
 end:
 getch();
}
