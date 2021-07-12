/*------MULTIPLCATION TABLE OF GIVEN NO.----*/

#include<stdio.h>
void main()
{
   int i,n,start,end;   //n is for no. whose table is required
                       //i is for iteration
                       //start is from where the table starts
                       //end up to which table you want
     printf("ENTER THE NO. WHOSE TABLE YOU WANT:");
  scanf("%d",&n);
  printf("ENTER NO. FROM WHERE THE TABLE START:");
  scanf("%d",&start);
  printf("ENTER AT WHICH THE TABLE ENDS:");
  scanf("%d",&end);
  printf("\n\n\n  TABLE OF %d FROM %d to %d:\n\n",n,start,end);

  for(i=start;i<=end;i++)
    printf("%d * %d =  %d\n",n,i,i*n);

  getch();
}
