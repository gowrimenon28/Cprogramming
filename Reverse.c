#include<stdio.h>
int main()
{
   int number,reminder,reverse=0;
   //Enter number
   printf("\nEnter any number:");
   scanf("%d",&number);

   while(number>=1)
   {
      reminder = number % 10;
      reverse = reverse * 10 + reminder;
      number = number / 10;
   }

   printf("\nReverse of the number is: %d", reverse);
   return 0;
}