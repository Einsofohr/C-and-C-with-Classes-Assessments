#include<stdio.h>

 int main()
 {
	char c;
	char choice;
	int value;
	int i;
	do{
		printf("M A T H   O P E R A T I O N S:\n");
		printf("[M] - Multiplication\n");
		printf("[D] - Division\n");
		printf("[A] - Addition\n");
		printf("[S] - Subtraction\n");
		printf("Enter your choice: ");
		fflush(stdin);
		scanf("%c", &choice);
		switch(choice){
		case 'M':
		case 'm':
			printf("Enter your desired value to be multiplied: ");
			scanf("%d", &value);
			printf("\n\n");
			for( i=1; i<=10; i++){
				printf("%d * %d = %d\n", value, i, (i*value));
			}
			break;
		case 'D':
		case 'd':
			printf("Enter your desired value to be divided: ");
			scanf("%d", &value);
			printf("\n\n");
			for(i=1; i<=10; i++){
				printf("%d / %d = %.2f\n", value, i, ((float)value/(float)i));
			}
			break;


		case 'A':
		case 'a':
			printf("Enter your desired value to be added: ");
			scanf("%d", &value);
			printf("\n\n");
			for( i=1; i<=10; i++){
				printf("%d + %d = %d\n", value, i, (i+value));
			}
			break;


		case 'S':
		case 's':
			printf("Enter your desired value to be subtracted: ");
			scanf("%d", &value);
			printf("\n\n");
			for(i=1; i<=10; i++){
				printf("%d - %d = %value\n", value, i, (i-value));


			}
			break;
		default:
			printf("\nWrong menu item\n");
			break;
		}
		printf("\nContinue [Y/N]? ");
		fflush(stdin);
		scanf("%c", &c);
		
	}while(c !='N' && c !='n');
	printf("\nThank you for choosing my program\n");
	getchar();
	
	return 0;
}