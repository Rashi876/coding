#include<stdio.h>
main()
{
	float avg,sum,m1,m2,m3;
	printf("Enter your marks in each of 3 subjects:");
	scanf("%f%f%f",&m1,&m2,&m3);
	avg=(m1+m2+m3)/3;
	sum=m1+m2+m3;
	printf("The average and sum of the marks are respectively:%f,%f",avg,sum);
}
