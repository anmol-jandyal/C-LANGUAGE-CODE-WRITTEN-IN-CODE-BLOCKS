/*.............DISPLAY THE EXPRESSIONS OF THE GIVEN VARIABLES.................*/



#include<stdio.h>
 void main()
 {
  int a=125,b=12345;
  long ax=1234567890;
  short s=4043;
  float x=2.13459;
  double dx=1.1415927;
  char c='W';
  unsigned long ux=2541567890;

  printf("%d",dx);                    // ((int)dx) gives us the int value of dx.
  printf("  a+c = %d+%d = %d",a,c,(a+c));         /* HERE a IS INT TYPE SO FORMAT SPECIFIER IS '%d' AND c IS CHAR TYPE AND ITS ASCII CODE IS OF INT TYPE SO WE USE %d
                                                     AND THE SUM OF TWO INTEGER IS ALSO AN INTEGER SO WE USE %d TO PRINT (a+c)*/

  printf("\n\n  x+c = %f+%d = %f",x,c,(x+c));     /* x is of float type -- %f AND c's ASCII CODE IS INT TYPE
                                                     as sum of int and float is also a float -> %f is used to print x+c */

  printf("\n\n  dx+x = %lf+%f = %lf",dx,x,(dx+x));  /*dx -> double so uses %lf and x is float type
                                                     and sum of float and double give double so v use %lf */

  printf("\n\n  ((int)dx)+ax = (integer value of dx)+ax = %d+%ld = %ld",((int)dx),ax,(((int)dx)+ax));
                                                            /*HERE %ld is used as the format specifier for ax */

  printf("\n\n  a+x = %d+%f = %f",a,x,(a+x));

  printf("\n\n  s+b = %hd+%d = %d",s,b,(s+b));    /* here %hd -- format specifier of short s also we can use %d as the range of short
                                                      lies in ramge of int*/

  printf("\n\n  ax+b = %ld+%d = %ld",ax,b,(ax+b));

  printf("\n\n  s+c = %hd+%d = %d",s,c,(s+c));

  printf(" \n\n  ax+ux = %ld+%lu = %lu",ax,ux,(ax+ux)); /*%lu is for long unsigned integer*/

  getch();
}
