#include<stdio.h>
int main()
{
int i,n,flag=0;
printf("Enter the number: ");
scanf("%d",n);
for(i=2;i<=n/2;i++)
{
 flag=1;
 break;
}
if(flag==0)
 printf("Entered number is a prime number");
else
 printf("Entered number is not a prime number");
 return 0;
 }
