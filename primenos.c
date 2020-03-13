/* C Program to Print Prime Numbers between 1 to 100 using For Loop */
 
#include <stdio.h>
 
int main()
{
  int i, Number, c; 
  
  printf(" Prime Number from 1 to 100 are: \n"); 
  for(Number = 1; Number <= 100; Number++)
  {
    c = 0;
    for (i = 2; i <= Number/2; i++)
    {
  	if(Number%i == 0)
  	{
     	  c++;
  	  break;
	}
    }
    if(c == 0 && Number != 1 )
    {
	printf(" %d ", Number);
    }  
  }
  return 0;
}
