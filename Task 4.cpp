#include<iostream>
using namespace std;
main()
{
	int sum,i,n,ar[n];
	cout<<"Enter the number of elements you want in your array: ";
	cin>>n;
	cout<<"One by one enter the values: ";
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	
	}
	for (i=0;i<n;i++)
	{
		sum=sum+ar[i];
		
	}
	cout<<"The sum of all the elements of your array is= "<<sum;
}
