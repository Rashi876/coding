#include<stdio.h>
#include<math.h>
main()
{   
    int n,d,r=0,c=0;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("The entered number has total no. of digits?");
	scanf("%d",&d);
	while(n>0)
	{r=r%10;
	 c=c+pow(n,d);
	 n/10;
	}
	if(c==n)
      printf("THE ENTERED NUMBER IS AN ANGSTROM NUMBER!");
    else
      printf("The number is not an angstrom number :(");
}
