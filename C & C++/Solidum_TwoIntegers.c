#include <stdio.h>
int main()
{
    int numbersEntered, sum=0;
    printf("Enter the first number: ");
    while ( scanf("%d", &numbersEntered) > 0 && numbersEntered > 0 )
    {
        printf("Enter another number to be added to the sum: ");
        sum += numbersEntered;
    }
    printf("\nSum is: ");
    printf("%d", sum);
    printf("\n");
    return 0;
}