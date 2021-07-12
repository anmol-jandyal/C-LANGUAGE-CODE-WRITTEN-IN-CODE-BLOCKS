/*-------TAKING N DIFFERENT NO.S FROM THE USER AND ADDING THEM AND THEIR AVERAGE------*/
#include<stdio.h>
void main()
{
 int x,i,n;
 float sum=0;
 printf("ENTER THE NO. OF INPUTS:");
 scanf("%d",&n);
 printf("\n\n");
 for(i=1;i<=n;i++)
  {
   printf("ENTER NO. %d : ",i);
   scanf("%d",&x);
   sum=sum+x;
  }
 printf("\n\n\nSUM = %f",sum);
 printf("\n\nAVERAGE = %f",sum/n);
 getch();
}
