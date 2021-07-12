/*............USE OF BINARY OPERATORS..............
 1.BITWISE AND(&)
 2.BITWISE OR(|)
 3.BITWISE XOR(^)
 4.BITWISE NOT(~)
 5.BITWISE RIGHT SHIFT(>>)
 6.BITWISE LEFT SHIFT(<<)
 NOTE- these operators works on the binary numbers(0&1).
 */

 #include<stdio.h>
 void main()
 {
  int a,b,c,x;
  printf("------------------ENTER THE VALUE OF a and b TO PERFORM BITWISE OPERATIONS--------------------");
  printf("\n ENTER THE VALUE OF a:");
  scanf("%d",&a);
  printf("\n ENTER THE VALUE OF b:");
  scanf("%d",&b);

  printf("\n\n\n\n----------USING BITWISE AND(&) OPERATOR---------");
  c=a&b;
  printf("\n a & b = %d",c);

  c=a|b;
  printf("\n\n\n\n----------USING BITWISE or(|) OPERATOR---------");
  printf("\n a | b = %d",c);

  c=a^b;
  printf("\n\n\n\n----------USING BITWISE xor(^) OPERATOR---------");
  printf("\n a ^ b = %d",c);

  c=~a;
  printf("\n\n\n\n----------USING BITWISE not(~) OPERATOR---------");
  printf("\n ~a = %d",c);

  c=~b;
  printf("\n ~b = %d",c);

  printf("\n\n\n\n----------USING BITWISE RIGHT SHIFT(>>) OPERATOR---------");
  printf("\n ENTER THE NO. TO PERFORM RIGHT SHIFT");
  scanf("%d",&x);
  c=a>>x;
  printf("\n a>>%d = %d",x,c);

  printf("\n\n\n\n----------USING BINARY LEFT SHIFT(<<) OPERATOR---------");
  printf("\n ENTER THE NO. TO PERFORM LEFT SHIFT");
  scanf("%d",&x);
  c=b<<x;
  printf("\n b<<%d = %d",x,c);
 getch();
 }
