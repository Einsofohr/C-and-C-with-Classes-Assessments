#include<stdio.h>
 
int main()
{
  int n, number, Sum = 0, Sum2 = 0;
 
  printf("\nPlease Enter the Value:");
  scanf("%d", &number);
  
  
  printf("\n Even Number List : ");
  n=2;
 while(n<=number)
 {
  Sum = Sum + n;
  printf(" %d",n);
  n=n+2;
 }
 printf("\nThe Sum of All Even Numbers up to %d  = %d", number, Sum);
 
 
 printf("\n\n Odd Number List : ");

 n=1;
 while(n<=number)
 {
  Sum2 = Sum2 + n;
  printf(" %d",n);
  n=n+2;
 }
 printf("\nThe Sum of All Odd Numbers up to %d  = %d", number, Sum2);
}  


  