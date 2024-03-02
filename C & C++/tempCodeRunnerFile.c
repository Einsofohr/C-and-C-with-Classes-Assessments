#include<stdio.h> 
 int main() 
 { 
   int a[10],b[10], i, sum; 
   printf("\nEnter elements of array A: "); 
   for(i=0;i<10;i++) 
   { 
   scanf("%d",&a[i]); 
   } 
   printf("\nEnter elements of array B: "); 
   for(i=0;i<10;i++) 
   { 
   scanf("%d",&b[i]); 
   } 
   for(i=0;i<10;i++) 
   { 
   sum = a[i]+b[i]; 
   } 
   printf("\nArray Sum: "); 
   for(i=0;i<10;i++) 
   { 
   printf("\n  \t\t\t %d", sum); 
    
 } 
   } 