#include <stdio.h>

void main() 
{
    int age;
    printf("Enter the age:  ");
    scanf("%d",&age);

    //checks if the age is above 60.
    if(age >= 60)
    {
        printf("Pension Amount = 10000",age);
    }

    //checks if age is above 50.
    else if (age >= 50)
    {
        printf("Pension Amount = 5000",age);
    }

    //checks if age is below 50.
    else
    {
        printf("Pension Amount = 0",age);
    }

    return 0;
}