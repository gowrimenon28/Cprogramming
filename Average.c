
#include <stdio.h>

void main()
{
    char name[20];
    float a, b, c, d, e; 
    float total, average ;

    printf("Name of Student: \n");
    scanf("%s",&name);
    printf("Enter marks of five subjects: \n"); // Input marks of five subjects 
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

    total = a + b + c + d + e ;  // Calculate total, average and percentage 
    average = total / 5.0;

    printf("Total marks = %.2f\n", total); // Print all results
    printf("Average marks = %.2f\n", average);

    getch();
}