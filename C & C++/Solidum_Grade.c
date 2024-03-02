#include<stdio.h>


int main(){
 char name[20];
 double prelimGrade,midtermGrade,finalGrade,cumulativeGrade;
 printf("Enter student name: ");
 gets(name);
 printf("Prelim grade: ");
 scanf("%lf",&prelimGrade);
 printf("Midterm grade: ");
 scanf("%lf",&midtermGrade);
 printf("Final grade: ");
 scanf("%lf",&finalGrade);
 //compute and display for cumulative grade based on the formula: CG=20% of prelim + 35% midterm + 45% final.
 cumulativeGrade=0.2*prelimGrade+0.35*midtermGrade+0.45*finalGrade;
 printf("Cumulative grade: %.2f\n",cumulativeGrade);


 getchar();
 


 return 0;
}