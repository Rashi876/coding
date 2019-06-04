#include<iostream>
using namespace std;
main()
{
	char s [20];
	cout<<"Enter the string: ";
	cin>>s;
	for(int i=0;i<2;i++)
	{
		if(s[i]>=65&&s[i]<=92)
		{
			s[i]=s[i]+32;
		}
	}
	cout<<s;
}
