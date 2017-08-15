#include<stdio.h>
int main()
{
 int n, f= 0, s= 1, next, c;
 
   printf("Enter the number of terms\n");
   scanf("%d",&n);
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = f+s;
         f=s;
         s=next;
      }
      printf("%d\n",next);
   }
