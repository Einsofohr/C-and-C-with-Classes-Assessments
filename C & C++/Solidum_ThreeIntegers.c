#include<stdio.h>

int main()

{

int a,b,c,sum,product,diff,quotient,remainder;

printf("Enter 1st number : ");

scanf("%d",&a);

printf("Enter 2nd number : ");

scanf("%d",&b);

printf("Enter 3rd number :");

scanf("%d",&c);

sum=a+b+c;

product=a*b*c;

diff=a-b-c;

quotient=a/b/c;

remainder=a%b%c;

printf("Sum is : %d",sum);

printf("\nProduct is : %d",product);

printf("\nDifference is : %d",diff);

printf("\nQuotient is : %d",quotient);

printf("\nRemainder is : %d",remainder);

return 0;

}