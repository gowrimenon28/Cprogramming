#include<stdio.h>

void main() 

{ 

      int number ; 
 
      printf("Enter the number:");
      scanf("%d",&number);
      
      switch (number) 
      {
        
       case 1: printf("Day of the week is Monday"); 

               break; 

       case 2: printf("Day of the week is Tuesday"); 

                break; 

       case 3: printf("Day of the week is Wednesday"); 

               break; 
       case 4: printf("Day of the week is Thursday"); 

               break; 
       case 5: printf("Day of the week is Friday"); 

               break; 
       case 6: printf("Day of the week is Saturday"); 

               break; 
       case 7: printf("Day of the week is Sunday"); 

               break;                                         

       default: printf("Invalid Input"); 

                break;   

   } 

   return 0; 
}  