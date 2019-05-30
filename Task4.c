#include<stdio.h>
#include<string.h>
main()
{
	char fname[10];char lname[10];
	printf("Enter your first name:");
	scanf("%s",&fname);
	printf("Enter your last name:");
	scanf("%s",&lname);
	strcat(fname,lname);
	printf("Your full name is:%s",fname);
}
