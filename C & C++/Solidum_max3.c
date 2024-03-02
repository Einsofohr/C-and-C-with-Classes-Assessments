#include<stdio.h>


int main(){
 printf("Enter the first integer: ");
 int first;
 scanf("%d", &first);
 
 printf("Enter the second interger: ");
 int second;
 scanf("%d", &second);
 
 printf("Enter the third integer: ");
 int third;
 scanf("%d", &third);
 
 int max = first;
 if(second > first && second >third){
 max = second;
 }
 
 else if(third>second && third>first){
 max = third;
 }
 
 int min = first;
 if(second < first && second <third){
 min = second;
 }
 
 else if(third<second && third<first){
 min = third;
 }
 
 printf("\nHighest: %d\n", max);
 printf("Lowest: %d", min);


 return 0;
}
