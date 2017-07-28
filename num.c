#include<stdio.h>
int main()
{
int n;
printf("Enter the no:",n);
scanf("%d",&n);
if(n==0)
  printf("entered no is zero");
else if(n>0)
  printf("entered no is positive");
else  
  printf("entered no is negative");
return 0;  
}
