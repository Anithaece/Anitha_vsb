#include<stdio.h>
int main()
{
int n;
printf("Enter the no:%d",n);
scanf("%d,&n);
if(n==0)
  printf("entered no is zero");
elseif(n>0)
  printf("entered no is positive");
else  
  printf("entered no is negative");
return 0;  
}
