/*......... USE OF sizeof() OPERATOR........
             -- SYNTAX --
  FOR VARIABLES sizeof(variable_name);
  FOR CONSTANTS sizeof(constant);
  FOR DATATYPES sizeof(datatype_name);
also the value is in int and unit is bytes
*/

#include<stdio.h>
void main()
{
 int a;
 char c;
 double d;
 float f;
 long int l;
 short int s;

 /*FINDING THE SIZES OF VARIABLES*/

 printf("\n.............THE SIZES OF DIFFERENT VARIABLES............\n\n");
 printf("\n sizeof(a) i.e memory space allocated to 'a' of int type = %d",sizeof(a));
 printf("\n sizeof(c) i.e memory space allocated to 'c' of char type = %d",sizeof(c));
 printf("\n sizeof(d) i.e memory space allocated to 'd' of double type = %d",sizeof(d));
 printf("\n sizeof(f) i.e memory space allocated to 'f' of float type = %d",sizeof(f));
 printf("\n sizeof(l) i.e memory space allocated to 'l' of long int type = %d",sizeof(l));
 printf("\n sizeof(s) i.e memory space allocated to 's' of short int type = %d",sizeof(s));

 printf("\n\n\n.............THE SIZES OF DIFFERENT DATATYPES............\n\n");
 printf("\n sizeof(int) i.e memory space allocated to int datatype = %d",sizeof(int));
 printf("\n sizeof(char) i.e memory space allocated to char type = %d",sizeof(char));
 printf("\n sizeof(double) i.e memory space allocated to double type = %d",sizeof(double));
 printf("\n sizeof(float) i.e memory space allocated to float type = %d",sizeof(float));
 printf("\n sizeof(long) i.e memory space allocated to long int datatype = %d",sizeof(long));
 printf("\n sizeof(short) i.e memory space allocated to short datatype = %d",sizeof(short));

 printf("\n\n\n.............THE SIZES OF DIFFERENT CONSTANTS............\n\n");
 printf("\n sizeof('2') = %d",sizeof('2'));
 printf("\n sizeof('c') = %d",sizeof('c'));
 printf("\n sizeof(2) = %d",sizeof(2));
 printf("\n sizeof(2.99776) = %d ",sizeof(2.88776));
 printf("\n sizeof('5.5') = %d",sizeof(5.5));

getch();
}
