/*-----CHECK WHETHER THE NO. IS IN A SPECIFIED RANGE OR NOT----------
    SPECIFIED RANGES ARE:[0,20],[21,40],[41,60],[61,80]*/
#include <stdio.h>
void main()
{
 int a;
  printf("ENTER THE NO. TO CHECK THE SPECIFIED RANGE FROM WHICH IT BELONG:");
  scanf("%d",&a);

  if(a>=0&&a<=20)
    printf("IT BLONGS TO RANGE [0,20].");

  else if(a>=21&&a<=40)
      printf("IT BLONGS TO RANGE [21,41].");

  else if(a>=41&&a<=60)
      printf("IT BLONGS TO RANGE [41,60].");

  else if(a>=61&&a<=80)
    printf("IT BLONGS TO RANGE [61,80].");

  else
    printf("IT DO NOT  BLONGS TO RANGE [0,80].");
 getch();
}
