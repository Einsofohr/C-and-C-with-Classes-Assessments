#include <stdio.h>
int main() {
    int integer;
    printf("Enter a Number: ");
    scanf("%d", &integer);

    
    if(integer % 2 == 0)
        printf("Number %d is even integer.", integer);
    else
        printf("Number %d is odd integer.", integer);
    
    return 0;
}
