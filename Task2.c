#include<stdio.h>
main()
{
	float c,f;
	printf("Enter the tempreture in celsius");
	scanf("%f",&c);
	f=((9/5)*c)+32;
	printf("The tempreture in celsius and that converted to fahrenheit is respectively:%f%f",c,f);
}
