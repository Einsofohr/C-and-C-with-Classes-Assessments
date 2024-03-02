#include<stdio.h>
int main()
{
 int choice, n1, n2, n3;

 do
 {
  printf("\n=== MENU OF OPERATIONS ===\n");
  printf("By: Karl Solidum\n");
  printf("[1] Addition\n");
  printf("[2] Substraction\n");
  printf("[3] Multiplication\n");
  printf("[4] Divisio\n");
  printf("[5] Modulo Division\n");
  printf("[6] quit\n");
  printf("Enter your choice: ");
  scanf("%d",&choice);
  printf("You have chosen: %d\n", choice);

 printf("Enter 1st number : ");

 scanf("%d",&n1);

 printf("Enter 2nd number : ");

 scanf("%d",&n2);

 printf("Enter 3rd number : ");

 scanf("%d",&n3);

  switch (choice)
  {
    case  1: printf("\nThe Sum = %d \n", n1 + n2 + n3);
             printf("\nThank you for using my program\n");
           break;
    case  2: printf("\nThe Difference = %d \n", n1 - n2 - n3);
             printf("\nThank you for using my program\n");
           break;
    case  3: printf("\nThe Product = %d \n", n1 * n2 * n3);
             printf("\nThank you for using my program\n");
           break;
    case  4: printf("\nThe Quotient = %d \n", n1 / n2 / n3);
             printf("\nThank you for using my program\n");
           break;
    case  5: printf("\n%d mod %d", n1/n2);
             printf("\n%d div %d", n1%n2);
             printf("\nnThank you for using my program\n");
             break;
    case  6: printf("Goodbye Thank you for using my program\n");
             break;
     default: printf("Wrong Choice. Enter again\n");
             break;
  }
 } while (choice != 5);
 return 0;
}