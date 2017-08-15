#include<stdio.h>
int main()
{
int j,n,f=1;
printf("Enter the number: \n");
scanf("%d",&n);
for(j=1;j<=n;j++)
f=f*j;
printf("factorial of the number %d is %d",n,f);
return 0;
}
