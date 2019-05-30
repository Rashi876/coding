#include<stdio.h>
main()
{
	int n,i=0;
	printf("Enter any number");
	scanf("%d",&n);
	printf("TABLE:----------------------------------------");
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d",n,i,n*i);
	
	}
}
