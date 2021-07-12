/* ------CHECKING WE CAN MAKE THE TRIANGLE FROM GIVEN LENGTH OF SIDES OR NOT-------*/
#include<stdio.h>
void main()
{
 float s1,s2,s3;
 printf("ENTER THE LENGTH OF SIDES:");
 scanf("%f %f %f",&s1,&s2,&s3);
 printf("NOTE:- if sum of length of two greater than third side then triangle is possible else it is not possible");
 printf("\ni.e s1+s2>s3\n   s2+s3>s1\n   s3+s1>s2\n THESE ALL CONDITIONS SHOULD BE TRUE");
  if((s1+s2)>s3&&(s2+s3)>s1&&(s3+s2)>s2)
    printf("\n\nPERIMETER=%f",s1+s2+s3);
  else
   printf("\n\nTHERE WILL BE NO TRIANGLE......");
 getch();
}
