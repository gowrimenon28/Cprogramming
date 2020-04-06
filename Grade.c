#include <stdio.h>

int main()
{
 int grade;

 printf("Enter your Marks \n");
 scanf("%d", &grade);
 
 if (grade >= 90) 
  {
   printf("\n A Grade is awarded",grade); 
  }
 else if (grade >= 80) 
  {
   printf("\n B+ Grade is awarded", grade);
  }
 else if (grade >= 70) 
  {
   printf("\n B Grade is awarded",grade);
   }
 else if (grade >= 60) 
  {
   printf("\n C Grade is awarded", grade);
  }
 else if (grade >= 50) 
  {
   printf("\n P Grade is awarded",grade);
  }
 else 
  {
   printf("\n Failed");
  } 
 return 0;
}