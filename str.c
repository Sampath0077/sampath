#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int l,i,j;
  char a[100];
  clrscr();
  gets(a);
  l=strlen(a);
  for(i=l;i>=0;i--)
  {
  if(a[i]==' ')
  {
  for(j=i+1;j<l;j++)
  printf("%c",a[j]);
  printf(" ");
  l=i;
  }
  else if(i==0)
  {
  for(j=i;j<l;j++)
  printf("%c",a[j]);
  }
  }

  getch();
  }
