#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
printf("Enter the string %s");
scanf("%s",&a);
strrev(a);
printf("Reversed string is %s",a);
return 0;
}
