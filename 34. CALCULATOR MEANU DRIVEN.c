/*--------CALCULATOR AND MEANU DRIVEN---------*/
#include<stdio.h>
#include<math.h>
void main()
{
 float a,b;
 char ch,x='0';
 do
 {
  printf("\n-----------MENU--------\n ENTER '+': FOR ADDITION.\n ");
  printf("ENTER '-': FOR SUBTRACTION.\n ");
  printf("ENTER '*': FOR MULTIPLICATION.\n ");
  printf("ENTER '/': FOR DIVISION.\n ");
  printf("ENTER '%': FOR REMANDER.\n ");
  printf("ENTER 'E': FOR EXIST.");
  scanf(" %c",&ch);
  switch(ch)
  {
   case '+':
    printf("\n\n------------\n\nADDITION\n\n");
    printf("ENTER THE VALUE OF NUM 1:");
    scanf("%f",&a);
    printf("ENTER THE VALUE OF NUM 2:");
    scanf("%f",&b);
    printf("\n\n NUM 1 + NUM 2 = %f + %f = %f\n\n",a,b,a+b);
    break;

   case '-':
    printf("\n\n------------\n\nSUBTRACTION\n\n");
    printf("ENTER THE VALUE OF NUM 1:");
    scanf("%f",&a);
    printf("ENTER THE VALUE OF NUM 2:");
    scanf("%f",&b);
    printf("\n\n NUM 1 - NUM 2 = %f - %f = %f\n\n",a,b,a-b);
    break;

   case '*':
    printf("\n\n------------\n\nMULTIPLICATION\n\n");
    printf("ENTER THE VALUE OF NUM 1:");
    scanf("%f",&a);
    printf("ENTER THE VALUE OF NUM 2:");
    scanf("%f",&b);
    printf("\n\n NUM 1 * NUM 2 = %f * %f = %f\n\n",a,b,a*b);
    break;

   case '/':
    printf("\n\n------------\n\nADDITION\n\n");
    printf("ENTER THE VALUE OF NUM 1:");
    scanf("%f",&a);
    printf("ENTER THE VALUE OF NUM 2:");
    scanf("%f",&b);
    printf("\n\n NUM 1 / NUM 2 = %f / %f = %f\n\n",a,b,a/b);
    break;

   case'%':
    printf("\n\n------------\n\nREMANDER\n\n");
    printf("ENTER THE VALUE OF NUM 1:");
    scanf("%f",&a);
    printf("ENTER THE VALUE OF NUM 2:");
    scanf("%f",&b);
    printf("\n\n REMANDER OF NUM 1 / NUM 2 = REMANDER OF %f / %f = %f\n\n",a,b,fmod(a,b));
    break;

    case 'E':
     x='e';
     break;

   default:
    printf("\n\nYOU HAVE ENTER WRONG OPERATOR.\n\n");
  }
 }while(x!='e');
 printf("\n\nTHANKS FOR USING THE CALCULATOR.");
getch();
}
