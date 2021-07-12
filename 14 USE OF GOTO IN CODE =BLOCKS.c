/*............USE OF GOTOXY IN CODE BLOCKS..........*/

#include<windows.h>
void main()
{
 COORD c;
 int a,b;
 printf("ENTER THE X-COORDINATE TO MOVE THE CURSOR IN X DIRECTION:");
 scanf("%d",&a);
 printf("ENTER THE X-COORDINATE TO MOVE THE CURSOR IN y DIRECTION:");
 scanf("%d",&b);
 c.X=a;
 c.Y=b;
 SetConsoleCursorPosition((GetStdHandle(STD_OUTPUT_HANDLE)),c);
 printf("WE ARE USEING GOTOXY IN CODE BLOCKS");
 getch();
}
