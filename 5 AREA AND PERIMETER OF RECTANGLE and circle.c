/*........perimeter and area of the rectangle AND CIRCLE............ */

#include <stdio.h>
#define PI 3.14                        // THE VALUE OF 'PI' WILL BE REPLACE BY 3.14.
                                       // ALSO write the word in capital letters also place the value without assignment operator(=) and just place space between symbol and its value.
void main()
{
  float r,len,width;

  printf("ENTER THE VALUE OF LENGTH OF RECTANGLE");
  scanf("%f",&len);
  printf("ENTER THE VALUE OF WIDTH OF RCTANGLE");
  scanf("%f",&width);
  printf("\n\n\n\nAREA OF RECTANGLE =  %f units sq \nPERIMETER OF RECTANGLE = %f units ",(len*width),2*(len+width));
 /* ........PERIMETER AND AREA OF CIRCLE...........*/
 printf("\n\n\nENTER THE RADIUS OF THE CIRCLE");
 scanf("%f",&r);
 printf("\n\n\nNOW LET EVALUATE THE AREA AND PERIMETER OF THE CIRCLE OF RADIUS = %f",r);
 printf("\nAREA OF CIRCLE = %f\nPERIMETER OF CIRCLE = %f",(PI*r*r),(2*PI*r));
 getch();
}
