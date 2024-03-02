#include <stdio.h>
int main()
{
    int numbersEntered1, numbersEntered2, sum=0;
    printf("Enter number: ");
    while( numbersEntered1 && numbersEntered2 > 0 )
    {
        scanf("%d", &numbersEntered1);
        scanf("%d", &numbersEntered2);
            if (numbersEntered1 == 99 && numbersEntered2 == 0){
                printf("finish");
            } else { continue; }
        sum = numbersEntered1 + numbersEntered2;
        printf("\nSum is: %d\n", sum);
        printf("Enter new number: ");
    }
    return 0;
}