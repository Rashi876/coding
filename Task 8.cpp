#include<iostream>
using namespace std;
void anagram(char str1[],char str2[])
{
	int i,flag=0,x[26]={0},y[26]={0};
	for(i=0;str1[i]!='\0';i++)
	x[str1[i]-'a']++;
	for(i=0;str2[i]!='\0';i++)
	y[str2[i]-'a']++;
	for(i=0;i<26;i++)
	{
		if(x[i]!=y[i])
		flag=1;
	}
	if(flag==1)
	cout<<"The strings are not anagrams";
	else
	cout<<"Entered strings are anagrams";
	
}
main()
{
	char str1[20],str2[20];
	int flag;
	cout<<"Enter string 1. : ";
	gets(str1);
	cout<<"Enter string 2. : ";
	gets(str2);
	anagram(str1,str2);
}
