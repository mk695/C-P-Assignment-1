/*
 * C Program to Find find Sum of the Series 1/1! + 2/2! + 3/3! + ……1/N!
 */
#include <stdio.h>
void main()
{
   int n,i,s=0,f=1;
   printf("please enter a number");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    { 
        f=f*i;
        s=s+i/f;
    }
  printf("%d",s);
}    
    
