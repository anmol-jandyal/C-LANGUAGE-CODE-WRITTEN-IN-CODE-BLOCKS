#include<stdio.h>
void main()
{
 int n,i;
 printf("ENTER THE NO. TO CHECK WHETHER IT IS PRIME OR NOT:");
 scanf("%d",&n);

 for(i=2;i<=n;i++)
  {
    if(n%i==0)
    {
       if(i!=n)
       {
         printf("\nTHE GIVEN NO.(i.e %d) IS NOT PRIME",n);
         break;
       }
       else
       {
         printf("\nTHE GIVEN NO.(i.e %d) IS PRIME",n);
         break;
       }
    }
   }
  if(n==1)
  printf("\nNEITHER COMPOSITE NOR PRIME");
  getch();
}
