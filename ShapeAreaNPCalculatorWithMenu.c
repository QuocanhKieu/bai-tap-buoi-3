#include<stdio.h>
#include<conio.h>
#include <math.h>
#include<stdlib.h>


int flag = 1;

void exitOrMenu() {
	
	printf("To return to menu, input 1. To exit, input 0 :");
	scanf("%d", &flag);
	if(flag) 
	{
		flag = 1; 
		system("cls");
	}
}


int main() {
	
	while(flag) {
		
		printf("-------------MENU-------------\n");
		printf("Press 1 to work with Circle   \n");
		printf("Press 2 to work with Square   \n");
		printf("Press 3 to work with Rectangle\n");

		printf("your choice is: ");
		int choice;
		scanf("%d", &choice);
		
		
		switch(choice) {
			case 1: {
				printf("You are working with Circle\n");
				printf("Now, enter the radius : ");
				float r;
				scanf("%f", &r);
				printf("Circle peremeter = %.2f\n", 2*r*M_PI);
				printf("Circle area = %.2f\n\n", r*r*M_PI);
				
				
				exitOrMenu();
				break;
			}
			case 2: {
				printf("You are working with Square\n");
				printf("Now, enter the square edge length : ");
				float length;
				scanf("%f", &length);
				printf("Square peremeter = %.2f\n", 4*length);
				printf("Square area = %.2f\n\n", length*length);
				
				
				exitOrMenu();
				break;
			}
			case 3: {
				printf("You are working with Rectangle\n");
				printf("Now, enter the rectangle length : ");
				float l;
				scanf("%f", &l);
				printf("Now, enter the rectangle width : ");
				float w;
				scanf("%f", &w);
				printf("Rectangle peremeter = %.2f\n", (l+w)*2);
				printf("Rectangle area = %.2f\n\n", l*w);
				
				
				exitOrMenu();
				break;
			}
			default: 
				printf("WARNING: Option not valid.\n");
				printf("Press any to continue.\n");
				getch();
				system("cls");
				break;
				
			
			
		}
		
	}
	
	
	return 0;
}
