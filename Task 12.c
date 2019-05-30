#include<stdio.h>
#include<stdlib.h>
main()
{   int c=0;float C=0,F=0;
	printf("Choose any one of the following:\n1. Celcius to fahrenheit\n2. Fahrenheit to celcuis\n3. Exit");
	scanf("%d",c);
	switch(c)
	{
		case 1:
			printf("Enter the tempreture in celcius: ");
			scanf("%f",&C);
			F=((9*C)/5)+32;
			printf("Tempreture in fahrenheit: %f",F);
			break;
		case 2:
		    printf("Enter the tempreture in fahrenheit: ");
			scanf("%f",&F);
			C=(5/9)*(F-32);
			printf("Tempreture in celsius: %f",C);
			break;
		case 3:
		    exit(0);break;
		default:
			printf("invalid!!");	
	}
}
