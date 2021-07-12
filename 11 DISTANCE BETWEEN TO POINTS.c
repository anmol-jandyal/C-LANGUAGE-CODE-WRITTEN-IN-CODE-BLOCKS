/*...........THE DISTANCE BETWEEN TWO POINTS IN A COORDINATE SYSTEM.........*/

#include<stdio.h>
#include<math.h>
void main()
{
 float x1,x2,y1,y2,z1,z2,d;
  printf("ENTER ALL THREE COORDINATES[ALSO USE (,) TO DIFFERENTIATE THE CORRDINATES] OF POINT 'P':");
  scanf("%f,%f,%f",&x1,&y1,&z1);

  printf("ENTER ALL THREE COORDINATES[ALSO USE (,) TO DIFFERENTIATE THE CORRDINATES] OF POINT 'Q':");
  scanf("%f,%f,%f",&x2,&y2,&z2);

  d=sqrt((pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2)));    //pow() is used for power and sqrt() for square root
                                                            //is a fumction present in math.h

  printf("THE DISTANCE BETWEEN P(%f,%f,%f) and Q(%f,%f,%f) = ((x2-x1)^2+(y2-y1)^2+(z2-z1)^2)^(1/2)",x1,y1,z1,x2,y2,z2);
  printf("\n\n DISTANCE = ((%f-%f)^2+(%f-%f)^2+(%f-%f)^2)^(1\2)",x2,x1,y2,y1,z2,z1);
  printf("\n\n     = %f units",d);

  getch();
 }
