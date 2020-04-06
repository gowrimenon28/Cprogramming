#include<stdio.h>

void main()
{
 
int num;

printf("Enter the value \n");
 scanf("%d", &num);
 
  if (num > 0) 
  {
   printf("\n %d is positive", num); 
  }
 else if (num < 0) 
  {
   printf("\n %d is negative ", num);
  }
 else 
  {
   printf("\n Value is Zero",num);
   }
   return 0;
}