#include <stdio.h>

int main(){

int grade;
char name[25];
printf("Enter Student name: ");
gets(name);
printf("Enter your grade:  ");
scanf("%d",&grade);
printf("You entered %d", grade); 

    /* Transmuted value */
	if(grade >= 98 && grade <=100){
	printf("\nYour Transmuted grade is 4.00"); 
		}
	else if ( grade >=95 && grade <=97){ 
		printf("\nYour Transmuted grade is 3.75");
		}
	else if ( grade >=92 && grade <=94){
		printf("\nYour Transmuted grade is 3.50");
		}
	else if ( grade >=89 && grade <=91){
		printf("\nYour Transmuted grade is 3.25");
		}
    else if (grade >=86 && grade <=88)
    {
        printf("\nYour Transmuted grade is 3.00");
    }
    else if (grade >=83 && grade <=85)
    {
        printf("\nYour Transmuted grade is 2.75");
    }
    else if (grade >=80 && grade <=82)
    {
        printf("\nYour Transmuted grade is 2.50");
    }
    else if (grade >=77 && grade <=79)
    {
        printf("\nYour Transmuted grade is 2.25");
    }
    else if (grade >=74 && grade <=76)
    {
        printf("\nYour Transmuted grade is 2.00");
    }
    else if (grade >=71 && grade <=73)
    {
        printf("\nYour Transmuted grade is 1.75");
    }
    else if (grade >=68 && grade <=70)
    {
        printf("\nYour Transmuted grade is 1.50");
    }
    else if (grade >=64 && grade <=67)
    {
        printf("\nYour Transmuted grade is 1.25");
    }
    else if (grade >=60 && grade <=63)
    {
        printf("\nYour Transmuted grade is 1.00");
    }
    else if (grade >=0 && grade <=59)
    {
        printf("\nYour Transmuted grade is 0.00");
    }
    else if (grade >=100)
    {
        printf("\nInvalid Input Please try again");
    }
    


return 0;
}