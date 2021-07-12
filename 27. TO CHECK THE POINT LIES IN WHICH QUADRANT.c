/*-----TO CHECK WHETHER THE GIVEN POINT LIES IN WHICH QUADRANT-------*/
#include<stdio.h>
void main()
{
 int x,y;
 printf("ENTER THE X-COORDINATE OF THE POINT:");
 scanf("%d",&x);
 printf("ENTER THE y-COORDINATE OF THE POINT:");
 scanf("%d",&y);

  if(y>0)                                    // we haven't use curely braces as if else ladder act as one statement.
   if(x>0)
    printf("\n\nTHE POINT P(%d,%d) LIES IN IST QUADRANT.",x,y);
   else if(x<0)
    printf("\n\nTHE POINT P(%d,%d) LIES IN 2nd QUADRANT.",x,y);
   else
    printf("\n\nTHE POINT P(%d,%d) LIES ON Y AXIS ABOVE ORIGIN.",x,y);


  else if(y<0)
   if(x>0)
    printf("\n\nTHE POINT P(%d,%d) LIES IN 4th QUADRANT.",x,y);
   else if(x<0)
    printf("\n\nTHE POINT P(%d,%d) LIES IN 3rd QUADRANT.",x,y);
   else
    printf("\n\nTHE POINT P(%d,%d) LIES ON Y AXIS BELOW ORIGIN.",x,y);

  else
   if(x>0)
    printf("\n\nTHE POINT P(%d,%d) LIES ON X-AXIS AND RIGHT OF ORIGIN.",x,y);
   else if(x<0)
    printf("\n\nTHE POINT P(%d,%d) LIES ON X-AXIS AND LEFT OF ORIGIN.",x,y);
   else
    printf("\n\nTHE POINT P(%d,%d) IS A ORIGIN.",x,y);

 getch();
}
