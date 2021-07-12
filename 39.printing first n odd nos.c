/*-------TO PRINT FIRST N ODD NO.S--------*/
#include<stdio.h>
void main()
{
 int i,n;
 printf("ENTER NO. OF TERME YOU WANT IN ODD NO.S");
 scanf("%d",&n);
 printf("\n\nTHE FIRST %d ODD NOS ARE:\n\n",n);
 for(i=1;i<=n;i++)
  printf("%d   ",2*i-1);
getch();
}
