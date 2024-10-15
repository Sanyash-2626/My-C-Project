#include<stdio.h>
void main()
{
float temp1,temp2;
char unit;
printf(" enter the temperature :");
scanf("%f",&temp1);
printf("\nenter'c'if the temperature is in celcious omd 'f' if it is farenheit :");
scanf(" %c",&unit);
if(unit=='c')
  {
  temp2=1.8*temp1+32;
  printf(" \nthe given temperature %f in celcious is equal to %f in farenheit ",temp1,temp2);
  }
else
   {
   temp2=(5*(temp1-32))/9;
   printf ("\nthe given temperature %f in farenheit is equal to %f in celcious ",temp1,temp2);
}
 }