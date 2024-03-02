#include<stdio.h>

int main()
{
    int x; 
    int A[10];
    int B[10];
    int temp[10];
    int sum = 0;


    printf("Enter elements for array A: ");
    for (x=0; x<10; x++){
        scanf("%d", &A[x]);
    }
    printf("Enter elements for array B: ");
    for (x=0; x<10; x++){
        scanf("%d", &B[x]);
    }


    for (x=0; x<10; x++){
        temp[x]=B[x];
    }
    for (x=0; x<10; x++){
        B[x]=A[x];
    }
    for (x=0; x<10; x++){
        A[x]=temp[x];
    }


    printf("New content of array A: ");
    for (x=0; x<10; x++){
        printf("%d ", A[x]);
    }
    printf("\n");
    printf("New content of array B: ");
    for (x=0; x<10; x++){
        printf("%d ", B[x]);
    }
    printf("\n");


    for (x=0; x<10; x++){
        sum += A[x] + B[x];
    }
    printf("Array Sum: %d", sum);
}