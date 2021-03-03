#include<stdio.h>
#include<stdlib.h>

int main()
{
	int mark;
	//float mark;
	printf("Enter your student's mark: ");
	scanf("%d", &mark);
	//scanf("%0.2f", &mark);
	if(mark >= 90 && mark <= 100)
		printf("Student scored an A+ Grade");
		else if(mark >= 80 && mark <= 89)
			printf("Student scored an A Grade");
			else if(mark >= 70 && mark <= 79)
				printf("Student scored a B+ Grade");
				else if(mark >= 60 && mark <= 69)
					printf("Student scored a B Grade");
					else if(mark >= 55 && mark <= 59)
						printf("Student scored a C+ Grade");
						else if(mark >= 50 && mark <= 54)
							printf("Student scored a C Grade");
							else if(mark >= 45 && mark <= 49)
								printf("Student scored a D+ Grade");
								else if(mark >= 40 && mark <= 44)
									printf("Student scored a D Grade");
									else if(mark >= 0 && mark <= 39)
										printf("Student scored an F Grade");
	else if(mark < 0 || mark > 100)
	printf("Wrong mark inputed!!");
	return 0;
}
