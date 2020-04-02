#include <stdio.h>


void main()
{
  
  
  float P,R,T,SI;
    printf("Enter Principle: ");  // Input principle, rate and time
    scanf("%f", &P);

    printf("Enter time: ");
    scanf("%f", &T);

    printf("Enter rate: ");
    scanf("%f", &R);

    SI = (P * R * T) / 100;// Calculate simple interest 

    printf("Simple Interest = %f", SI); // Print the resultant value of SI 

    getch();
    
}