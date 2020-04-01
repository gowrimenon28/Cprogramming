#include <stdio.h>

void main()
{
  char name[20];
  int age;
  char food[100];
  printf("Name of pet:\n");
  scanf("%s",&name);
  printf("Age of the pet:\n");
  scanf("%d",&age);
  printf("Favourite Foods:\n");
  scanf("%s",&food);
 
  getch();
}