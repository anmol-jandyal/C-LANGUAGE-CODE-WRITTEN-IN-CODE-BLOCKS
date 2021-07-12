/*.............CONVERTING THE TOTAL AMOUNT TO AVAILABLE NOTES.............*/
#include<stdio.h>
void main()
{
 int amt,a,b,c,d,e,f,g,h,i,x;
 printf("ENTER THE TOTAL AMOUNT(in RS) TO SEE THE DIFFERENT NO.S NOTES:");
 scanf("%d",&amt);
 a=amt/2000;               // a MEANS THE NO.S OF 2000 NOTE.
 x=amt-a*2000;

 b=x/500;               //b MEANS NO.S OF 500 NOTE.
 x=x-b*500;

 c=x/200;               //c MEANS NO.S OF 200 NOTE.
 x=x-c*200;

 d=x/100;               // d - mo.s of 100 note.
 x=x-d*100;

 e=x/50;                // e - mo.s of 50 note.
 x=x-e*50;

 f=x/20;                // h - mo.s of 20 note.
 x=x-f*20;

 g=x/10;                 // g - mo.s of 10 note.
 x=x-g*10;

 h=x/5;                 // hmeans no.s RS 5 coins.

 i=x-h*5;               // i means no.s Re 1 coin.

 printf("THERE ARE FOLLOWING NOTES AVAILABLE IN THE MARKET :\n RS 2,0000 NOTE.\nRS 500 NOTE.\nRS 200 NOTE.\nRS 100 NOTE.\nRS 50 NOTE.\nRS 20 NOTE.\nRS 10 NOTE.\nRs 5 COIN.\nRE 1 COIN.");
 printf("\n\n\n\nTHE PERSON WITH RS %d AMOUNT HAVE FOLLOWING NO.S OF NOTES:::",amt);
 printf("\nNO.S OF RS 2000 NOTES = %d",a);
 printf("\nNO.S OF RS 500  NOTES = %d",b);
 printf("\nNO.S OF RS 200  NOTES = %d",c);
 printf("\nNO.S OF RS 100  NOTES = %d",d);
 printf("\nNO.S OF RS 50   NOTES = %d",e);
 printf("\nNO.S OF RS 20   NOTES = %d",f);
 printf("\nNO.S OF RS 10   NOTES = %d",g);
 printf("\nNO.S OF RS 5    coins = %d",h);
 printf("\nNO.S OF Re 1    coins = %d",i);
getch();
}
