#include<stdio.h>
 
int main()
{
  int n, number, Sum = 0, Sum2 = 0;
 
  printf("\nPlease Enter the Value :");
  scanf("%d", &number);
  
  printf("\nEven Numbers between 0 and %d are : ", number);
  for(n = 2; n <= number; n=n+2)
  {
    Sum = Sum + n;
    printf("%d  ", n);
  }
  printf("\nThe Sum of All Even Numbers upto %d  = %d", number, Sum);
  
  printf("\nOdd Numbers between 0 and %d are : ", number);
  for(n = 1; n <= number; n=n+2)
  {
      Sum2 = Sum2 + n;
      printf("%d ", n);
  }
   printf("\nThe Sum of All Odd Numbers upto %d  = %d", number, Sum2);
  return 0;
}