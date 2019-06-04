#include<iostream>
using namespace std;
main()
{
	int i,j,t,ar[5];
	cout<<"One by one enter the five elements of the array in random mannner:";
	for(i=0;i<5;i++)
	{
		cin>>ar[i];
	
	}
for(j=0;j<5;j++)	
{
	for(i=0;i<5-j-1;i++)
	{
		if(ar[i]>ar[i+1])
	     {
		 t=ar[i];
	     ar[i]=ar[i+1];
	     ar[i+1]=t;
	     }
	}
}
	for(i=0;i<5;i++)
	{
		cout<<ar[i];
	}
}
