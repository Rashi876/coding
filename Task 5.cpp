#include<iostream>
using namespace std;
main()
{
	int i,l,s,ar[5];
	cout<<"One by one enter the five elements of the array: ";
	for(i=0;i<5;i++)
	{
		cin>>ar[i];
		
	}
	for(i=0;i<5;i++)
	{
		if(ar[i]>ar[i+1])
		l=ar[i];
		else
		l=ar[i+1];
	}
	cout<<"The largest number equals= "<<l;
	for(i=0;i<5;i++)
	{
		if(ar[i]<ar[i+1])
		s=ar[i];
		else
		s=ar[i+1];
		
	}
	cout<<"The smallest number equals= "<<s;
}
