#include <stdio.h>
#include <conio.h>
void main()
{
  char a[100];
  int len,i,vowel=0;
  clrscr();
  printf("\nEnter a String: ");
  gets(a);
  len=strlen(a);
  for(i=0;i<len;i++)
  {
   if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U')
      vowel=vowel+1;
  }
  printf("\nThere are %d Vowels in the string",vowel);
  getch();
}