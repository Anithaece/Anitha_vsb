#include<stdio.h>
int main()
{
int num,i=1,pow;
long int sum=1;
printf("Enter the number:\n ");
scanf("%d",&num);
printf("Enter the power:\n ");
scanf("%d",&pow);
while(i<=pow)
{
sum=sum*num;
i++;
}
printf("\n%d to the power of %d is %d",num,pow,sum);
return 0;
}
