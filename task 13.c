#include<stdio.h>
main()
{
    int ar[5],i=0,big,small;
	printf("Enter one by one 5 elements of array: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",ar[i]);
		
	}
	for(i=0;i<5;i++)
	{
		if(ar[i+1]>ar[i])
		  big=ar[i+1];
		else
		  big=ar[i];
    }
    printf("Biggest number: %d",big);
    for(i=0;i<5;i++)
    {
    	if(ar[i+1]<ar[i])
    	  small=ar[i+1];
    	else
		  small=ar[i];  
	}
	printf("Smallest number: %d",small);
}
