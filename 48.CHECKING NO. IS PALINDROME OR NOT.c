/*-------TO CHECK WHETHER THE NO. IS PALINDROME OR NOT----------*/

#include<stdio.h>
void main()
{
 long int n,a;
 int x;
 float sum=0,h=0.1;
 printf("ENTER THE NO. TO CHECK WHETHER IT IS PALINDROME OR NOT:");
 scanf("%ld",&n);
 a=n;
 while(a!=0)
 {
  x=a%10;                            //THIS GIVE THE LAST DIGIT OF THE NUMBER.
  h=h*10;
  sum=sum+x/h;
  a=a/10;                            // IF n=123 THEN n/10=12 as n and 10 are integers.
 }
  sum=sum*h;
 if(sum==n)
  printf("\n\nTHE NO. 'i.e %ld' IS PALINDROME.",n);
 else
  printf("\n\nTHE NO. 'i.e %ld' IS NOT PALINDROME.",n);
 getch();
}
