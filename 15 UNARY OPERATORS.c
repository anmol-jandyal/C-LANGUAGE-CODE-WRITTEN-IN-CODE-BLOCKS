/*............USING UNARY OPERATORS............
  i.e -,+,++,--,sizeof()
  -,+ are the simple signs i.e it represents +ve and -ve sign in the values.
  ++ are of to types i.e post and pre. ALSO POST++ IS OF LEAST PRIORITY LESS THAN THAT OF ASSIGNMENT.
  -- are of to types i.e post and pre.
  sizeof() are used to find the size of different variables, datatypes and contants.
*/
#include<stdio.h>
void main()
{
 int a=-12,b,x,y;                   //here a=-12 where (-) is a unary operator.
 printf("enter the value of int b:");
 scanf("%d",&b);

 printf("a=%d and b=%d",a,b);
 x=b++;                             //here we use post increment operator also firstly value of b goto x and then increment of b take place
                                    //b++=b+1 and ++a=a+1
 y=++a;                             //here pre increment is used and so firstly increment of a take place and then assignment.
 printf("\nUSING INCREMENT OPERATORS\nb++=%d",b);
 printf("\n\nx=b++ = %d. \nHERE 1.ASSIGNMENT TAKE PLACE\n2.THEN INCREMENT ",x);
 printf("\n\ny=++a = %d\n1.INCREMENT\n2.ASSIGNMENT",a,y);

 x=--b;                      //pre decrement.  --b=b-1
 y=a--;                      //post decrement. a--=a-1
 printf("\n\nUSING DECREMENT OPERATORS");
 printf("\nPRIORITY OF pre is same as unary but that of post is less than assignment");
 printf("\nx=--b = %d \ny=a--=%d",x,y);
getch();
}
