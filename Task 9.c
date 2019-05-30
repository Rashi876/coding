#include<stdio.h>
main()
{
	int n,i=0,t=1;
	printf("Enter any number: ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	 {
	 t=t*i;
     } 
printf("The factorial of entered number: %d",t);
}
