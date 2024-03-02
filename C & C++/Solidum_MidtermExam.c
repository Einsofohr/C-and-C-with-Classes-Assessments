#include <stdio.h>
#include <conio.h>
#define p printf
#define s scanf

int main()

{

      int Hours,Payrate,Totalsalary;
      p("Enter Hours Worked: ");
      s("%d",&Hours);
      p("Hours Rate: ");
      s("%d",&Payrate);
     
      if (Hours >= 50 && Hours <=70) /* 50 to 70 hours of work per week */
            {    
             Totalsalary = Hours * Payrate + 5000;
             p("Your bonus is: 5000\n");
             p("This means your Total Salary is: %d \n",Totalsalary);
             }
     if (Hours >= 40 && Hours <=49) /* 40 to 49 hours of work per week */
           {
           Totalsalary = Hours * Payrate + 3000;
           p("Your bonus is: 3000 \n");
           p("This means your Total Salary is: %d \n",Totalsalary);
           }

     if (Hours >= 30 && Hours <=39) /* 30 to 39 hours of work per week */
           {
           Totalsalary = Hours * Payrate + 1000;
           p("Your bonus is: 1000 \n");
           p("This means your Total Salary is: %d \n",Totalsalary);
           }
             
     getch();
      return 0;
     
}