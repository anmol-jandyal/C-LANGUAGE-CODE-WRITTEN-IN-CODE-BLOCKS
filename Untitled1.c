/*GREATEST COMMON DIVISOR*/
#include<stdio.h>
#include<conio.h>
int gcdon(int a1,int a2)
{
     static int i=1, gcd=0;
     if(a1<a2)
     {
          if(i<=a1)
            if(a1%i==0 && a2%i==0)
             if(gcd<i)
               gcd=i;
          i++;
          gcdon(a1,a2);
          return (gcd);

     }
      else
     {
           if(i<=a2)
            if(a1%i==0 && a2%i==0)
             if(gcd<i)
               gcd=i;
          i++;
          gcdon(a1,a2);
          return (gcd);
     }
}

int main()
{
     int n1, n2, a;
     printf("ENTER TWO NO.S TO CHECK THEIR GREATEST COMMON DIVISOR (NOTE:USE SPACE TO DISTINGUISH B/W NO.S)");
     scanf("%d %d",&n1,&n2);
     if(n1==n2)
       printf("\n\nGREATEST COMMON DIVISOR OF %d and %d is %d",n1,n2,n1);
     else
     {
          a = gcdon(n1, n2);
          printf("\n\nGREATEST COMMON DIVISOR OF %d and %d is %d", n1, n2, a);
     }
     getch();
     return 0;
}
