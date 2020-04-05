#include <stdio.h>
int main()
{
   int n , i,j;
    
    printf("Enter a Number ");
    scanf("%d",&j);
    for(n=j; n<=10; ++n)
    {
  
    for(i=1; i<=10; ++i)
    {
   
    printf("%d * %d = %d \n", n, i, n*i);
   
    }
    
    }
    getch();
    
}