#include<stdio.h>
void main()
{
float r,i,total;
printf("enter the value of i");
scanf("%f",&i);
if(i<=50.0)
{
r=(i*(0.5));
printf("electricity bill is %f", r);
}
else if(i>=51.0&&i<=150.0)
{
r=(i*(0.75))+(50*0.5);
printf("electricity bill is %f",r);
}
else if(i>=250.0&&i<=151.0)
{
r=(i*(1.20))+(50*0.5)+(100*0.75);
printf("electricity bill is %f", r);
}
else
{
r=((i)*(1.50))+(100*(1.20))+(50*0.5)+(100*0.75);
printf("electricity bill is %f", r);
}
printf("\n %f",r);
}