/* C Program to Calculate Simple Interest */
#include<stdio.h> 
int main() 
{
   float PAmount,R,Time,si;
   printf("\nPlease enter the Principal Amount : \n");
   scanf("%f", &PAmount);
   printf("Please Enter Rate Of Interest : \n");
   scanf("%f", &R);
   printf("Please Enter the Time Period in Years : \n");
   scanf("%f", &Time);
   si = (PAmount*R*Time) / 100;
   printf("\nSimple Interest for Principal Amount %.2f is = %.2f", PAmount, si);
 
   return 0;
}
