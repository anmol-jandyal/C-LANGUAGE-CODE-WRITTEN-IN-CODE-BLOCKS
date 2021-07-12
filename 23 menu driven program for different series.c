/*---------PRINTING THE DIFFERENT COUNTING BASED ON USER DEMAND WITH THE HELP OF MENU--------- */
#include<stdio.h>
void main()
{
 int a[100],i,X,Y,j;
 char ch,c='a';
 do
 {
  printf("\n\n\n------MENU-----\n");
  printf("ENTER 1: TO DISPLAY THE COUNTING FROM GIVEN POINT TO OTHER.\n");
  printf("ENTER 2: TO DISPLAY THE FIRST N NATURAL NO.S(starts from 1).\n");
  printf("ENTER 3: TO DISPLAY THE FIRST N WHOLE NO.S(starts from 0).\n");
  printf("ENTER 4: TO DISPLAY THE ENEN NO.S FROM X TO Y (WHERE X AND Y IS ANY NO.).\n");
  printf("ENTER 5: TO DISPLAY THE ODD NO.S FROM X TO Y (WHERE X AND Y IS ANY NO.).\n");
  printf("ENTER 6: TO DISPLAY PRIME NO.S FROM X  TO Y (WHERE X AND Y IS ANY NO.).\n");
  printf("ENTER 7: TO DISPLAY COMPOSITE NO.S FROM X  TO Y (WHERE X AND Y IS ANY NO.).\n");
  printf("ENTER 8: TO DISPLAY THE FIBONACCI SERIES FOR FIRST N NO.S OF SERIES.\n");
  printf("ENTER E: TO EXIT.\n");
  scanf(" %c",&ch);

  switch(ch)
  {
    case '1':
     printf("\n\n\n......counting..........\nENTER THE FIRST NO. OF TNE COUNTING:\n");
     scanf("%d",&X);
     printf("ENTER THE LAST NO. OF TNE COUNTING:\n");
     scanf("%d",&Y);
     i=X;
     printf("THE COUNTING FROM %d TO %d IS AS FOLLOWS:\n",X,Y);
     while(i<=Y)
      {
        printf("%d\n",i);
        i++;
      }
     break;

     case '2':
     printf("\n\n\nENTER THE NO. UPTO WHICH YOU WANT NATURAL NO.S:\n");
     scanf("%d",&X);
     i=1;
     printf("THE NATURAL NO.S UPTO %d ARE AS FOLLOWS:\n",X);
     while(i<=X)
      {
        printf("%d\n",i);
        i++;
      }
     break;

     case '3':
     printf("\n\n\nENTER THE NO. UPTO WHICH YOU WANT WHOLE NO.S:\n");
     scanf("%d",&X);
     i=0;
     printf("THE WHOLE NO.S UPTO %d ARE AS FOLLOWS:\n",X);
     while(i<=X)
      {
        printf("%d\n",i);
        i++;
      }
     break;

    case '4':
     printf("\n\n\nENTER THE FIRST NO. OF TNE EVEN NO.S COUNTING:\n");
     scanf("%d",&X);
     printf("ENTER THE LAST NO. OF TNE EVEN NO.S COUNTING:\n");
     scanf("%d",&Y);
     i=X;
     printf("THE EVEN COUNTING FROM %d TO %d IS AS FOLLOWS:\n",X,Y);
     while(i<=Y)
      {
        if(i%2==0)
         printf("%d\n",i);
        i++;
      }
     break;

     case '5':
     printf("\n\n\nENTER THE FIRST NO. OF TNE ODD NO.S COUNTING:\n");
     scanf("%d",&X);
     printf("ENTER THE LAST NO. OF TNE ODD NO.S COUNTING:\n");
     scanf("%d",&Y);
     i=X;
     printf("THE ODD COUNTING FROM %d TO %d IS AS FOLLOWS:\n",X,Y);
     while(i<=Y)
      {
        if(i%2!=0)
         printf("%d\n",i);
        i++;
      }
     break;

    case '6':
     printf("\n\n\nENTER THE FIRST NO. OF TNE PRIME NO.S COUNTING:\n");
     scanf("%d",&X);
     printf("ENTER THE LAST NO. OF TNE PRIME NO.S COUNTING:\n\n");
     scanf("%d",&Y);
     i=X;
     printf("THE PRIME COUNTING FROM %d TO %d IS AS FOLLOWS:\n",X,Y);
     while(i<=Y)
      {
        for(j=2;j<=i;j++)
         {
           if(i%j==0&&i==j)
            printf("%d\n",i);
           else if(i%j==0&&i!=j)
            break;
           else ;
         }
        i++;
      }
     break;

    case '7':
     printf("\n\n\nENTER THE FIRST NO. OF TNE composite NO.S COUNTING:\n");
     scanf("%d",&X);
     printf("ENTER THE LAST NO. OF TNE composite NO.S COUNTING:\n");
     scanf("%d",&Y);
     i=X;
     printf("THE composite COUNTING FROM %d TO %d IS AS FOLLOWS:\n",X,Y);
     while(i<=Y)
      {
        for(j=2;j<=i;j++)
         {
           if(i%j==0&&i!=j)
            printf("%d\n",i);
            break;
         }
        i++;
      }
     break;


    case '8':
     printf("\n\n\nENTER THE no. OF TERMS OF FIBONACCIO SERIES:");
     scanf("%d",&X);
     i=0;
     a[0]=0;a[1]=1;
     printf("\n IT IS THE SERIES IN WHICH EVERY NEXT NO. IS SUM OF PREVIOUS TWO NO.S\nTHE FIBONACCIO SERIES \n");
     while(i<X)
      {
        if(i==1||i==0)
         printf("%d\t",a[i]);
        else
         {
          a[i]=a[i-2]+a[i-1];
          printf("%d\t",a[i]);
         }
        i++;
      }
     break;

    case 'E':c='e';break;

    default:
     printf("\a\nYOU HAVE ENTER WRONG CHARACTER........\nPLEASE SEE THE MENU AGAIN.");
   }
 getch();
 }while(c!='e');
getch();
}

