/**Temperature Converter**/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main()
{
	int chI;
	char ch;
	float C, K, F;
	system("cls");
	printf("\n\tA. Celsius to Kelvin/ Kelvin to Celsius");
	printf("\n\tB. Fahrenheit to Celsius/ Celsius to Fahrenheit");
	printf("\n\tC. Kelvin to Fahrenheit/ Fahrenheit to Kelvin");
	scanf("%c", &ch);
	system("cls");
	switch(ch)
	{
		case 'A':
				printf("\n\t1. Celsius to Kelvin\n\t2. Kelvin to Celsius");
				scanf("%d", &chI);
				system("cls");
				switch(chI)
				{
					case 1:
							printf("Enter the temperature in Celsius:");
							scanf("%f", &C);
							system("cls");
							printf("%.2f C= %.2f K", C, C+273.15);
								break;
					case 2:
							printf("Enter the temperature in Kelvin:");
							scanf("%f", &K);
							system("cls");
							printf("%.2f K= %.2f C", K, K-273.15);
								break;
					default :
							printf("Invalid Input, Choose the correct option.");		
				}
					break;
		case 'B':
				printf("\n\t1. Fahrenheit to Celsius\n\t2. Celsius to Fahrenheit");
				scanf("%d", &chI);
				system("cls");
				switch(chI)
				{
					case 1:
							printf("Enter the temperature in Fahrenheit:");
							scanf("%f", &F);
							system("cls");
							printf("%.2f F= %.2f C", F, 5/9*(F-32));
								break;
					case 2:
							printf("Enter the temperature in Celsius:");
							scanf("%f", &C);
							system("cls");
							printf("%.2f C= %.2f F", C, (C*9/5)+32);
								break;
					default :
							printf("Invalid Input, Choose the correct option.");		
				}
					break;
		case 'C':
				printf("\n\t1. Kelvin to Fahrenheit\n\t2. Fahrenheit to Kelvin");
				scanf("%d", &chI);
				system("cls");
				switch(chI)
				{
					case 1:
							printf("Enter the temperature in Kelvin:");
							scanf("%f", &K);
							system("cls");
							printf("%.2f K= %.2f F", K, ((K-273.15)*9/5)+32);
								break;
					case 2:
							printf("Enter the temperature in Fahrenheit:");
							scanf("%f", &F);
							system("cls");
							printf("%.2f F= %.2f K", F, ((F-32)*5/9)+273.15);
								break;
					default :
							printf("Invalid Input, Choose the correct option.");			
				}
					break;
		default:
				printf("Invalid Input, Choose the correct option.");
	}
	getch();
}
