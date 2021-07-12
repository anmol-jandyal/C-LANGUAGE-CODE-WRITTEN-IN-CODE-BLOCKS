/*----------ELEGIBILITY CRITERIA FOR ADMISSION.---------*/
#include<stdio.h>
void main()
{
 int m,p,c,t;
 printf("------MARKS CRITERIA-------\n1.MARKS IN MATHS>=65.\n2.MARKS IN CHEMISTRY>=50.\n3.MARKS IN PHYSICS>=55.\n4.TOTAL MARKS>=190.");
 printf("\n\n\nCHECK WHETHER YOU ARE ELIGIBLE OR NOT.\n\nENTER THE MARKS IN MATHS:");
 scanf("%d",&m);
 printf("\nENTER THE MARKS IN CHEMISTRY:");
 scanf("%d",&c);
 printf("\nENTER THE MARKS IN physics:");
 scanf("%d",&p);
 t=p+m+c;

 if(t>=190)
  {
   if(c>=50)
    {
     if(m>=65)
     {
       if(p>=55)
        {
         printf("\n\nYOU ARE ELIGIBLE FOR ADMISSION");
        }
       else
        printf("\n\nYOU ARE NOT ELIGIBL.");
     }
     else
      printf("\n\nYOU ARE NOT ELIGIBL.");
    }
    else
     printf("\n\nYOU ARE NOT ELIGIBL.");
  }
 else
  printf("\n\nYOU ARE NOT ELIGIBLE.");
 getch();
 }
