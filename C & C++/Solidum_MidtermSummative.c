#include<stdio.h>


int main()
{
 
 printf("Class Participation\n");
 int quiz;
 float sum = 0.0;
 for(quiz=0; quiz<3; quiz++){
 printf("Quiz %d: ", (quiz+1));
 float quiz;
 scanf("%f", &quiz);
 sum += quiz;
 
 }
 float average_quiz = sum / 3;
 printf("Average: %.2f\n", average_quiz);
 int Lab;
 float sum_lab = 0.0;
 for(Lab=0; Lab<3; Lab++){
 printf("Lab. %d: ", (Lab+1));
 float lab;
 scanf("%f", &lab);
 sum_lab += lab;
 
 }
 float average_lab = sum_lab / 3;
 printf("Average: %.2f\n", average_lab);
 
 
 int Assignment;
 float sum_assignment = 0.0;
 for(Assignment=0; Assignment<3; Assignment++){
 printf("Assignment %d: ", (Assignment+1));
 float assignment;
 scanf("%f", &assignment);
 sum_assignment += assignment;
 
 }
 float average_assignment = sum_assignment / 3;
 printf("Average: %f\n", average_assignment);
 float class_participation = 0.4 * (average_quiz+average_lab+average_assignment) / 3 ;{
 printf("Class participation: %.2f", class_participation);
 }

 int Prelim_exam;
 float Exam_grade = 0.0;
 for(Prelim_exam=0; Prelim_exam<1; Prelim_exam++){
 printf("\nWhat is your Prelim exam score: ", (Prelim_exam+1));
 float prelimsgrade;
 scanf("%f", &prelimsgrade);
 Exam_grade += prelimsgrade;  
 }
 float Prelim_grade = Exam_grade * 0.6;
 printf("\nYour Percentage grade is: %.2f", Prelim_grade);
 
 float prelim_card_grade = class_participation + Prelim_grade;
 printf("\nYour Prelim Grade is: %.2f", prelim_card_grade);


 printf("\nRemarks: ");
 if ("prelim_card_grade >=60")
 {
     printf("Passed!");
 }
 else{
     printf("Failed!");
 }
    
 
  
 

    
 
 
 return 0;
 
}