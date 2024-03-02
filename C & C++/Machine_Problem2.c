#include <stdio.h>

int main()

{

int a[12];

int even=0, odd=0;

float avg=0;

printf("Enter the elements of the array: ");

for(int i=0; i<12; i++)

{

scanf("%d", &a[i]);

}

for(int i=0; i<12; i++)

{

if((i+1)%2==0)

even+=a[i];

if((i+1)%2!=0)

odd+=a[i];

}

avg=((float)(even+odd))/2;

printf("\nSum of even indexed cells: %d\n", even);

printf("Sum of odd indexed cells: %d\n", odd);

printf("Average: %f", avg);

return 0;

}