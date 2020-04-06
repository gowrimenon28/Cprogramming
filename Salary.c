#include<stdio.h>
 
int main() 
{
   int netsalary, basic, da, ta;
 
   printf("Enter your Basic salary : ");
   scanf("%d", &basic);
 
   da = (10 * basic) / 100;
   ta = (12 * basic) / 100;
 
   netsalary = basic + da + ta;
 
   printf("\Net salary : %d", netsalary);
   
   return 0;
}