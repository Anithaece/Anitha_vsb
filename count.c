#include<stdio.h>
int main()
{
int n,count=0;
printf("Enter the number: ");
scanf("%d",&n);
while(n)
{
n=n/10;
count++;
}
printf("length is %d ",count++);
return 0;
}
