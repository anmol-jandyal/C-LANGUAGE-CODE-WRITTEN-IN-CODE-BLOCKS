/*--------TO PRINT STAR DIAMOND--------*/
#include<stdio.h>
#include<math.h>
void main()
{
 int n,i,x,j,k;
  printf("ENTER THE NO. OF ROWS YOU WANT:");
  scanf("%d",&n);
  printf("\nNOTE THAT IF YOU ENTERED EVEN NO. THEN THERE WILL BE N + 1 ROWS.");
  x=(n/2)*2+1;
  printf("\n\n\n     STAR DIAMOND:\n\n");
  for(i=-x/2;i<=x/2;i++)
   {
     for(k=1;k<=abs(i);k++)
       printf(" ");
     for(j=1;j<=abs(abs(i)-x/2)+1;j++)
       printf("* ");
     printf("\n");
   }
  getch();
}

