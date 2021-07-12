/*
  .......... PRINTING THE VALUES OF A VARIABLE BY TAKING THE VALUE FROM USER......
  .......................... USE OF FORMATE SPECIFIES.........................
  %d  -- for integer.
  %f  -- for float.
  %lf -- for double.
  %c  -- for char.
  %e  -- for float.
  %g  -- for float.
  %h  -- for short integer.
  %o  -- for octal integer.
  %x  -- for hexadecimal integer.
  %i  -- for decimal, octal, heaxdecimal ineger.
  %s  -- for string.
  %u  -- for unsigned decimal integer.
*/

#include<stdio.h>
void main()
{
  int i1,i2=5,i3='t';                           /* i1 contains garbage value(the value going to store in i1 is undefined).
                                                   i2 = 5  and in i3 the ASCII code of 't' will be stored.
                                                */
  float f1,f2=50.5;
  char c1,c2='a',c3=5;                          // c3 stores character whose ASCII code is 99.
  double d1,d2=2.332;                           // Double is just like float with more precision

  printf("Enter the value of int i1");
  scanf("%d",&i1);

  printf("Enter the value of float f1");
  scanf("%f",&f1);

  printf("Enter the value of char c1");
  scanf(" %c",&c1);                             // Here we have to place space before %c "the leading whitespace ensures it's the previous newline is ignored".

  printf("Enter value of double d1");
  scanf("%lf",&d1);

  printf("\n\n\n");

  printf("THE VALUE OF INTEGER VARIABLES................. ");
  printf("\n 'i1' = %d \n 'i2' = %d \n 'i3' = 't'= %d \n ",i1,i2,i3);
  printf("\n\n\n");

  printf("THE VALUES OF FLOAT VARIABLES.........");
  printf("\n 'f1' = %f \n 'f2' = %f \n ",f1,f2);
  printf("\n\n\n");

  printf("THE VALUES OF DOUBLE VARIABLES..................");
  printf("\n 'd1'=%lf \n 'd2'=%lf",d1,d2);
  printf("\n\n\n");

  printf("THE VALUE OF CHAR VARIABLE..................");
  printf("\n 'c1' =%c \n 'c2' =%c \n 'c3' = 5 = %c",c1,c2,c3);
  getch();
}
