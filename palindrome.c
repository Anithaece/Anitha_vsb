#include<stdio.h>
int main()
{
int n,t,g,p=0;
scanf("%d",&n);
t=n;
while(t!=0)
{
g=t%10;
t=t/10;
p=p*10+g;
}
if(n==p)
 printf("entered no is a palindrome");
else
 printf("entered no is not a palindrome");
return 0;
}
