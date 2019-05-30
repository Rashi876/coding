#include<stdio.h>
#include<string.h>
main()
{
	char s[10];
	int l,i=0,j=0,flag=0;
	printf("Enter any string:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{ l=l+1;
	}
	for(i=0,j=l;i=j;i++,j--)
	{ 
	 if(s[i]!=s[j])
	  flag=1;
	  break;
     
	}
	if(flag==0)
	 printf("THE ENTERED STRING IS A PALINDROME!");
	else
	 printf("The entered string is not a palindrome:(");
	 
}
