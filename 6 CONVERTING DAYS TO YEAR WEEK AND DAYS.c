/*........CONVERTING DAYS TO YEARS-WEEK-DAYS............*/

void main()
{
 int days,year,week,d;
 int a;
 printf("ENTER THE TOTAL NO.S OF DAYS THAT ARE TO BE CONVERTED TO PARTICULAR YEAR WEEK AND DAY:");
 scanf("%d",&days);

 year=days/365;        // HERE IN YEAR INTEGER VALUE WILL BE STORED AS DAYS AND 365 ARE THE INTEGER.
 a=days-(year*365);
 week=a/7;
  d=a-(week*7);
 printf("\n\n\n %d DAYS = %d YEARS - %d WEEKS - %d DAYS.",days,year,week,d);
 getch();
}



















































































































































