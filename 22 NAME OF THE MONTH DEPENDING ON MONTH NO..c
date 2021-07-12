/*-----ENTER THE NO. OF MONTH AND GET MONTH NAME-------*/
#include<stdio.h>
void main()
{
 int a;
 printf("\nENTER THE NO. OF MONTH TO GET THE NAME OF MONTH.");
 scanf("%d",&a);
 switch(a)
  {
   case 1:
   printf("\nTHE MONTH NAME IS JANUARY..");
   break;

   case 2:
   printf("\nTHE MONTH NAME IS FEBRARY..");
   break;

   case 3:
   printf("\nTHE MONTH NAME IS MARCH..");
   break;

   case 4:
   printf("\nTHE MONTH NAME IS APRIL..");
   break;

   case 5:
   printf("\nTHE MONTH NAME IS MAY..");
   break;

   case 6:
   printf("\nTHE MONTH NAME IS JUNE..");
   break;

   case 7:
   printf("\nTHE MONTH NAME IS JULY..");
   break;

   case 8:
   printf("\nTHE MONTH NAME IS AUGUST..");
   break;

   case 9:
   printf("\nTHE MONTH NAME IS SEPTEMBER..");
   break;

   case 10:
   printf("\nTHE MONTH NAME IS OCTOBER..");
   break;

   case 11:
   printf("\nTHE MONTH NAME IS NOVEMBER..");
   break;

   case 12:
   printf("\nTHE MONTH NAME IS DECEMBER..");
   break;
   default:
   printf("\a.....SELECT FROM 1 TO 12 ONLY....");
  }
getch();
}


