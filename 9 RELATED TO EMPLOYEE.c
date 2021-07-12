/*.......  TAKE E-ID FROM USER,SALARY/HR AND NO.S OF HOURS IN MONTH...................
           AND PRINT ITS ID AND TOTAL SALARY IN A PARTICULAR MONTH */
#include<stdio.h>
void main()
{
 unsigned int id;
 int hr;
 float salary;
 printf("ENTER THE EMPLOYEE'S ID :");
 scanf("%u",&id);
 printf("ENTER THE SALARY / HOUR IN US $");
 scanf("%f",&salary);
 printf("ENTER THE TOTAL NO.S OF HRS IN A MONTH");
 scanf("%d",&hr);
 printf("\n\nTHE EMPLOYEE'S ID : %u",id);
 printf("\nTHE TOTAL SALARY = U$ %f",(salary*hr));
 getch();
}
