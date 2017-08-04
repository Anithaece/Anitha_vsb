#include<stdio.h>
int main ()
{
char g;
scanf("%c",&g);
if((g>='a'&&g<='z')||(g=='A'&&g=='Z'))
  printf("Entered char is an alphabet");
else
  printf("Entered char is a number");
return 0;
}
