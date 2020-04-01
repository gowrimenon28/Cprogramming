#include <stdio.h>

void main()
{
  char name[20];
  char school[100];
  int age;
  float height;
  float marks;
  printf("Name of the student:\n");
  scanf("%s",&name);
  printf("Name of the school:\n");
  scanf("%s",&school);
  printf("Age of the student:\n");
  scanf("%d",&age);
  printf("Height of the student(cm):\n");
  scanf("%f",&height);
  printf("Marks of the student:\n");
  scanf("%f",&marks);
  getch();
}