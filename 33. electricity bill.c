/*-----------TO CALCULATE THE ELECTRICITY OF THE CONSUMES------------*/
#include<stdio.h>
void main()
{
 float x,b;
 int i;
 char n[30];
 printf("ELECTRICITY CHARGES PER UNIT\n\n");
 printf("    UNITS                          RATES(Rs).\n\n");
 printf("   UPTO 199                          1.20\n");
 printf(" 200 and above but less tha 400      1.50\n");
 printf(" 400 and above but less tha 600      1.80\n");
 printf(" 600 and above                       2.00\n");
 printf("\nif bill exceeds 400 then a surcharge of 15% will be charged and the minnimum bill should be 100\n\n");

 printf("ENTER THE CONSUMER ID:");
 scanf("%d",&i);
 printf("ENTER THE NAME OF CONSUMER:");
 scanf("%s",n);                      //as n is a string so no & used.
 printf("ENTER NO. OF UNITS:");
 scanf("%f",&x);

 if(x<=199)
  {
   if(x>=0&&x<=80)
    {
      b=100;
      goto end;
    }
   else
    {
      b=x*1.2;
      goto end;
    }
  }
 else if(x>=200&&x<400)
  {
   b=x*1.50;
   goto end;
  }
 else if(x>=400&&x<600)
  {
   b=x*1.80;
   b=b+(15*b)/100;
   goto end;
  }
 else
  {
   b=x*2.00;
   b=b+(15*b)/100;
   goto end;
  }

 end:
  printf("\n\n\n---------------\n\n");
  printf("ENTER THE CONSUMER ID:%d\n",i);
  printf("ENTER THE NAME OF CONSUMER:%s\n",n);
  printf("ENTER NO. OF UNITS:%f\n",x);
  printf("BILL = Rs %f",b);
 getch();
}
