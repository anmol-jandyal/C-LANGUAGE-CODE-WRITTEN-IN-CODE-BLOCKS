/*finding the total electricity bill*/
#include<stdio.h>
void main()
{
 float units,bill=0;
 printf("BILL CHARGES IS AS FOLLOW:\n\nFOR FIRST 50 UNITS:RS 0.50/UNIT\n");
 printf("FOR NEXT 100 UNITS: RS 0.75/UNIT\n");
 printf("FOR NEXT 100 UNITS: RS 1.20/UNIT\n");
 printf("FOR UNITS ABOVE 250 UNITS: RS 1.50/UNIT\n");
 printf("AN ADDITIONAL SURCHARGE OF 20%% IS ADDED TO BILL.\n");  //TO PRINT % WE HAVE TO USE %%

 printf("\n\n\n-------------------------\n\n");
 printf("enter the no. of units used:");
 scanf("%f",&units);
 printf("\n\n");

 if(units>250)
  {
   bill=(units-250)*1.50 + 100*1.20 + 100*0.75 + 50*0.50;  // FOR UNITS above 250
   bill=bill*20/100+bill;
  }
 else if(units>150)
  {
   bill=(units-150)*1.20 + 100*0.75 + 50*0.50;   // FOR UNITS form 150 to 250
   bill=bill*20/100+bill;
  }

 else if(units>50)
  {
   bill=(units-50)*0.75 + 50*0.50;  // FOR UNITS form 51 to 150
   bill=bill*20/100+bill;
  }
 else
  {
   bill=units*0.50;                // FOR UNITS BELOW AND EQUAL TO 50
   bill=bill*20/100 + bill;
  }
 printf("NO. OF UNITS: %f units\nBILL = RS %.2f",units,bill);//HERE WE USE %.2f WHICH MEANS 2 DIGIT AFTER DECIMAL POINT WILL BE PRINTED
getch();
}

