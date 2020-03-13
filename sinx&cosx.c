#include<stdio.h>
#include<math.h>
void main()
 {
    float sinvalue,cosvalue,x;
    printf("\Enter the value:");
    scanf("%f",&x);
    sinvalue=sin(x);
    cosvalue=cos(x);
    printf("\n The sin value of %f=%f",x,sinvalue);
    printf("\n The cos value of %f=%f",x,cosvalue);
 }  
