/* C Fibonacci series Program using While Loop */

#include <stdio.h>
int main()
{
  int Number, i = 0, Next, First= 0, Second= 1;

  printf("\n Please Enter the Range Number: ");
  scanf("%d",&Number);
  
  while(i < Number) 
  {
  	if(i <= 1)
  	{
  		Next = i;
	}
	else
	{
		Next = First + Second;
		First = Second;
		Second = Next;
	}
    printf("%d \t", Next);
   	i++;  
  }
  return 0;
}
