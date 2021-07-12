/*...........CONVERTING TIMES IN SEC TO HOUR - MINUTE - SECEOND.............*/

#include<stdio.h>
void main()
{
 int s,h,m,a;
  printf("ENTER THE TIME IN SECONDS :");
  scanf("%d",&s);

  printf("\n\n\n.....IMPORTANT INFORMATIONS.....\n1 HOUR = (1*60*60)SECS = 3600 SEC\n1 MINUTE = 60 SECS");

  h=s/3600;            //h means no.s of hours.
  a=s-h*3600;          //a = remaining seconds.
  m=a/60;               //m = minutes.
  a=a-m*60;

  printf("\n\n\n%d seconds in hours minutes and seconds:::\n",s);
  printf("NO.S OF HOURS = %d\nNO.S OF MINUTES = %d\nNO.S OF SECOND = %d ",h,m,a);
 getch();
}
