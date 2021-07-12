/*........AVERAGE FUEL CONSUMPTION OF THE BIKE.........*/


#include<stdio.h>
void main()
{
 float a,d,l;
  printf("ENTER THE TOTAL DISTANCE TRAVELLED IN KM:");
  scanf("%f",&d);
  printf("ENTER THE TOTAL FUEL COSUMED FOR GIVEN DISTANCE TRAVELLED (in liters):");
  scanf("%f",&l);
  a=d/l;
  printf("\n\n\nTHE AVERAGE COSUMPTION OF BIKE IS GIVEN BY--\n\n TOTAL DISTANCE/FUEL CONSUMED = %f/%f\n  = %f",d,l,a);
 getch();
}
